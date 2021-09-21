package main
import "fmt"

func testMap () {
	item := map[string]int {
		"phone": 200,
		"laptop": 1200,
		"egg": 2,
	}
	fmt.Println(item)

	for k, value := range item {
		fmt.Println(value)
		fmt.Println(k)
	}
}

func main() {
	// var tab = [3]int{1, 2, 3}
	// var arr = []string{"hello", "world", "toto"}
	// fmt.Println(tab)
	// fmt.Println(arr)
// 
	// arr = append(arr, "tata")
	// fmt.Printf("arr = %v", arr)
	testMap();
}