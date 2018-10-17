class Node:
  def __init__(self, data):
    self.data = data
    self.next = None

class Stack:
  def __init__(self):
    self.top = None

# pop method removes the top element and returns it
  def pop(self):
    if self.top is not None:
      popped = self.top
      self.top = self.top.next
      return popped

# push method adds a new node at the top of the stack
  def push(self, val):
    if self.top is None:
      self.top = Node(val)
    else:
      old_top = self.top
      self.top = Node(val)
      self.top.next = old_top

# peek method prints the top element, or underflow message
  def peek(self):
    print(self.top.data if self.top is not None else "Underflow")

s = Stack()
s.peek()
s.push(1)
s.push(2)
print(s.pop().data)
s.push(3)
s.peek()
s.push(5)
s.push(6)
print(s.pop().data)
