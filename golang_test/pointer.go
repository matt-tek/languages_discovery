package main

import "fmt"

func updateName(name *string) {
	*name = "tata"
}

func main() {
	str := "toto"

	fmt.Printf("name = %v\n", str)
	updateName(&str)
	fmt.Printf("name = %v\n", str);
}