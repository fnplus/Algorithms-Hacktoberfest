/** Class: Stack
Each instance represents a stack
*/
public class Stack {
   private int maxSize;
   private long[] stackArray;
   private int top;
   
   public MyStack(int maxSize) {
      this.maxSize = maxSize;
      stackArray = new long[maxSize];
      top = -1;
   }
  /**
    *Inserts an element on top of the stack
    *@param: element the element to be inserted.
    *@throws: Exception if the Stack overflows
    */
   public void push(long element) throws Exception{
      try{
        stackArray[++top] = element;
      }
     catch(java.lang.ArrayIndexOutOfBoundsException e){
       throw new Exception("Stack Overflow");
   }
  /**
    *@returns: Element at the top of the stack and removes the element from the stack
    *@throws: Exception if the Stack underflows
    */
   public long pop() throws Exception {
      try{
        return stackArray[top--];
      }
     catch(java.lang.ArrayIndexOutOfBoundsException e){
       throw new Exception("Stack Underflow");
   }
   }
  /**
    * @returns: element at top of the stack (view only) doesn't remove the element
    *@throws: Exception if the Stack underflows
    */
   public long peek() throws Exception {
      try{
        return stackArray[top];
      }
     catch(java.lang.ArrayIndexOutOfBoundsException e){
       throw new Exception("Stack Underflow");
   }
   }
  /**
    *@returns: true if the stack is empty
    */
   public boolean isEmpty() {
      return (top == -1);
   }
  
  /**
    *@returns: true if the stack is full
    */
   public boolean isFull() {
      return (top == maxSize - 1);
   }
}
