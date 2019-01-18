package main

import (
	"fmt"
	"math"
	"os"
	"strconv"
)

func addsqrt(a float64, b float64) float64 {
	return math.Sqrt(a) + math.Sqrt(b)
}

func main() {
	fmt.Println("a1 = ", os.Args[1])
	fmt.Println("a2 = ", os.Args[2])

	a, _ := strconv.ParseFloat(os.Args[1], 64)
	b, _ := strconv.ParseFloat(os.Args[2], 64)

	c := addsqrt(a, b)
	fmt.Printf("sqrt(%v) + sqrt(%v) = %v\n", a, b, c)
}

