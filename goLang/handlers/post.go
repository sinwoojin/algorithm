package handlers

import (
	"net/http"
	"strconv"

	"myapp/models"

	"github.com/gin-gonic/gin"
)

var posts = []models.Post{}
var nextID = 1

// Create Post
func CreatePost(c *gin.Context) {
	var newPost models.Post
	if err := c.ShouldBindJSON(&newPost); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid body"})
		return
	}
	newPost.ID = nextID
	nextID++

	posts = append(posts, newPost)
	c.JSON(http.StatusCreated, newPost)
}

// Read All Posts
func GetPosts(c *gin.Context) {
	c.JSON(http.StatusOK, posts)
}

// Read One Post
func GetPostByID(c *gin.Context) {
	id, err := strconv.Atoi(c.Param("id"))
	if err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid ID"})
		return
	}
	for _, post := range posts {
		if post.ID == id {
			c.JSON(http.StatusOK, post)
			return
		}
	}
	c.JSON(http.StatusNotFound, gin.H{"error": "Post not found"})
}

// Update Post
func UpdatePost(c *gin.Context) {
	id, err := strconv.Atoi(c.Param("id"))
	if err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid ID"})
		return
	}

	var updatedPost models.Post
	if err := c.ShouldBindJSON(&updatedPost); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid body"})
		return
	}

	for i, post := range posts {
		if post.ID == id {
			updatedPost.ID = id
			posts[i] = updatedPost
			c.JSON(http.StatusOK, updatedPost)
			return
		}
	}
	c.JSON(http.StatusNotFound, gin.H{"error": "Post not found"})
}

// Delete Post
func DeletePost(c *gin.Context) {
	id, err := strconv.Atoi(c.Param("id"))
	if err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid ID"})
		return
	}

	for i, post := range posts {
		if post.ID == id {
			posts = append(posts[:i], posts[i+1:]...)
			c.JSON(http.StatusOK, gin.H{"message": "Post deleted"})
			return
		}
	}
	c.JSON(http.StatusNotFound, gin.H{"error": "Post not found"})
}
