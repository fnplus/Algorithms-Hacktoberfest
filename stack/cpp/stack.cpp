#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct Stack
{
    int data;
    Stack *next;
};

int main()
{
    system("cls");
    char choice;int option;Stack*top;
    Stack*create_node(int);
    Stack*insert_node(Stack*);
    Stack*delete_node(Stack*);
    void display(Stack*);
    top=NULL;
    do
    {
       system("cls");
       cout<<"1.Insert\n\n2.Delete\n\n3.Display\n\n4.Exit\t\t";
       cin>>option;
       switch(option)
       {
           case 1: top=insert_node(top);
                    break;
           case 2: top=delete_node(top);
                    break;
           case 3: display(top);
                    break;
           case 4: exit(0);
                    break;
       }
       cout<<"\n\nEnter Y or y to continue and n to exit\t";
       cin>>choice;
    }while(choice=='y'||choice=='Y');
    exit(0);
    return 0;
}

Stack*create_node(int a)
{
    Stack*temp;
    temp=new Stack;
    temp->data=a;
    temp->next=NULL;
    return temp;
}
Stack*insert_node(Stack*t)
{
   int value;
   Stack *temp;
   cout<<"Enter the value to be entered \n";
   cin>>value;
   temp=create_node(value);
   if(t==NULL)
   {
       t=temp;
       return t;
   }
   else
   {
       temp->next=t;
       t=temp;
       return t;
   }
}
Stack*delete_node(Stack*t)
{
    if(t==NULL)
    {
        cout<<"\n\nStack underflow\n";
        return t;
    }
    else
    {
        Stack*s;
        s=t;
        t=t->next;
        cout<<"\n Element deleted is :-\t"<<s->data;
        delete s;
        return t;
    }
}
void display(Stack*t)
{
    system("cls");
    if(t==NULL)
    {
        cout<<"\n There are no elements to show as the stack is empty\n";
    }
    else
    { cout<<"\n The elements are :-";
        cout<<endl<<endl;
        while(t!=NULL)
        {
            cout<<t->data<<"\t";
            t=t->next;
        }
    }
}
