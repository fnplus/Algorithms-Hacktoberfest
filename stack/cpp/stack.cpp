#include<bits/stdc++.h>

using namespace std;
struct node {
    int data;
    struct node *next;
};

struct node* top = NULL;

void push(int val){
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next =top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<"The popped element is :"<<top->data<<endl;
        top = top->next;
        }
    }

void See() {
   struct node* ptr;
   if(top==NULL)
      cout<<"Stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}

int main() {
   int ch, val;
   cout<<"\n1. Push";
   cout<<"\n2. Pop";
   cout<<"\n3. See";
   cout<<"\n4. Exit \n";
   do {
      cout<<"\nEnter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"\n Enter value to be pushed:";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            See();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
      return 0;
}
