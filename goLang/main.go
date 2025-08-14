package main

import (
	"time"

	"myapp/handlers"

	"github.com/gin-contrib/cors"
	"github.com/gin-gonic/gin"
)

func main() {
	r := gin.Default()

	r.Use(cors.New(cors.Config{
		AllowOrigins:     []string{"http://localhost:3000"},
		AllowMethods:     []string{"GET", "POST", "PUT", "DELETE"},
		AllowHeaders:     []string{"Origin", "Content-Type", "Authorization"},
		AllowCredentials: true,
		MaxAge:           12 * time.Hour,
	}))

	// Auth
	r.POST("/login", handlers.Login)
	r.POST("/logout", handlers.Logout)

	// Posts CRUD (JWT 보호)
	posts := r.Group("/posts")
	posts.Use(handlers.AuthMiddleware())
	{
		posts.POST("", handlers.CreatePost)
		posts.GET("", handlers.GetPosts)
		posts.GET("/:id", handlers.GetPostByID)
		posts.PUT("/:id", handlers.UpdatePost)
		posts.DELETE("/:id", handlers.DeletePost)
	}

	r.Run(":8080")
}
