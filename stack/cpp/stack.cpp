#include <iostream>
#define MAX_STACK_SIZE 1000

using namespace std;

int stack[MAX_STACK_SIZE];
int stackPointer = 0;

int stackSize() {
  return stackPointer;
}

void push(int a) {
  if(stackPointer == MAX_STACK_SIZE) return;
  stack[stackPointer++] = a;
}

int pop() {
  if(!stackPointer) return 0;
  return stack[--stackPointer];
}


int main() {
  push(1); push(2); push(3);
  cout << pop() << ' ' << pop() << ' ' << pop() << endl;

  return 0;
}
