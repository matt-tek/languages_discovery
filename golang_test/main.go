package main

import "fmt"

func main() {
	var nb int = 42
	toto := "hello world"
	pi := 3.14
	fmt.Printf("%v , universal responce = %v\n", toto, nb) //normal print
	fmt.Printf("%q , universal responce = %v\n", toto, nb) //print vra between quote
	fmt.Printf("type of toto = %T , type of nb = %T\n", toto, nb) //print the type of the var
	fmt.Printf("%f is a float number\n", pi) //print float
	fmt.Printf("%0.1f print a float arounded\n", pi) //print float with number after coma you choice
}