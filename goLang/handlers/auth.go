// auth.go (계속)
type LoginRequest struct {
	Username string `json:"username"`
	Password string `json:"password"`
}

func Login(c *gin.Context) {
	var req LoginRequest
	if err := c.ShouldBindJSON(&req); err != nil {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Invalid request"})
		return
	}

	// 실제에서는 DB 조회 필요
	if req.Username != "admin" || req.Password != "1234" {
		c.JSON(http.StatusUnauthorized, gin.H{"error": "Invalid credentials"})
		return
	}

	token, err := GenerateToken(req.Username)
	if err != nil {
		c.JSON(http.StatusInternalServerError, gin.H{"error": "Could not create token"})
		return
	}

	c.JSON(http.StatusOK, gin.H{"token": token})
}

func Logout(c *gin.Context) {
	// JWT는 상태를 저장하지 않으므로 서버에서 무효화하려면
	// Redis 블랙리스트 방식이나 토큰 만료 시간을 짧게 설정
	c.JSON(http.StatusOK, gin.H{"message": "Logged out (client should delete token)"})
}
