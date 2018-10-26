
//added :-)
#include <iostream>
#include <algorithm>
#include <stack>
 using namespace std;

 void viewstack(stack <int> temp){
   while(!temp.empty()){
     cout << s.top() << endl;
     s.pop();
   }
 }

int main(){
  stack <int> s;
  cout << "Entering 1,2,3,4,5 into the stack -- ";
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout << "\nThe stack looks like this -- ";
  viewstack(s);
  cout << "\nPopping the top of stack 's' -- ";
  s.pop();
  cout << "\nNow the stack looks like this -- ";
  viewstack(s);
}
