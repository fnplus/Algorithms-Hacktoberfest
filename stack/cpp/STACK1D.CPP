#include<bits/stdc++.h>
#define MAX 10
using namespace std;
int stac[MAX];
int top=-1;

void push(int e)
{
if (top==MAX-1)
{
cout<<"Stack overflow";
//getch();
return;
}
top++;
stac[top]=e;
}

int pop()
{
if (top==-1)
{
cout<<"Stack underflow";
//getch();
return(0);
}
int c=stac[top];
top--;
return c;
}

void traverse()
{
if (top==-1)
{
cout<<"Stack underflow";
//getch();
return;
}
for(int i=top;i>=0;i--)
cout<<stac[i]<<" ";
}

int main()
{
int ch=0;int e=0;
do
{
cout<<"1.Push   2.Pop    3.Traverse    4.Exit";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter a number";
cin>>e;
push(e);
break;
case 2:
pop();
break;
case 3:
traverse();
break;
case 4:
return 0;
}
}while(1);
//getch();
}
