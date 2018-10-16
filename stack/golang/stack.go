package main

import (
	"fmt"
)

// Node represents one entity in the stack
type Node struct {
	Data int
	Next *Node
}

// Top is the base of the stack. Points to nil
var Top *Node

// CreateNode creates a node for a give data value
func CreateNode(data int) *Node {
	return &Node{Data: data}
}

// Push points the given node to the current top node. And declares
// the current node as the top node
func Push(node *Node) {
	node.Next = Top
	Top = node
}

// Pop returns the top node and removes it from the stack and
// declares the next node as the top node
func Pop() *Node {
	popped := Top
	Top = Top.Next
	return popped
}

// DisplayStack traverses through the stack and displays the value
// of each Node
func DisplayStack() {
	currentNode := Top
	for currentNode != nil {
		fmt.Printf("%d -> ", currentNode.Data)
		currentNode = currentNode.Next
	}
	fmt.Println("base")
}

func main() {
	Top = nil

	Push(CreateNode(1))
	Push(CreateNode(2))
	Push(CreateNode(3))
	Push(CreateNode(4))

	DisplayStack()

	Pop()
	DisplayStack()
	Pop()
	DisplayStack()
}

// Output:
// 4 -> 3 -> 2 -> 1 -> base
// 3 -> 2 -> 1 -> base
// 2 -> 1 -> base
