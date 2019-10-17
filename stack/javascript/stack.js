// Stack class 
class Stack {

    // Implementation using Array
    constructor() {
        this.items = [];
    }

    // Related Functions

    // push function 
    push(element) {
        // inserts element into the items 
        this.items.push(element);
    }

    // pop function 
    pop() {
        // return top most element in the stack 
        // and removes it from the stack 
        // Underflow if stack is empty 
        if (this.items.length == 0)
            return "Underflow";
        return this.items.pop();
    }

    // peek function 
    peek() {
        // return the top most element from the stack 
        // but doesn't delete it. 
        return this.items[this.items.length - 1];
    }

    // isEmpty function 
    isEmpty() {
        // return true if stack is empty 
        return this.items.length == 0;
    }

    // printStack function 
    printStack() {
        var str = "";
        for (var i = 0; i < this.items.length; i++)
            str += this.items[i] + " ";
        return str;
    }
}


// Implementation
// creating object for stack class 
var stack = new Stack();

// returns true 
console.log(stack.isEmpty());

// returns Underflow 
console.log(stack.pop());

// Adding element to the stack 
stack.push(10);
stack.push(20);
stack.push(30);

// Printing the stack
console.log(stack.printStack());

// returns 30 
console.log(stack.peek());

// returns 30 and removes it from stack 
console.log(stack.pop());

console.log(stack.printStack());
