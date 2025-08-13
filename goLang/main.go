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

	// 로그인 라우팅
	r.POST("/login", handlers.Login)
	r.POST("/logout", handlers.Logout)

	// Protected route
	r.GET("/me", handlers.AuthMiddleware(), func(c *gin.Context) {
		username := c.GetString("username")
		c.JSON(200, gin.H{"username": username})
	})

	r.Run(":8080")
}
