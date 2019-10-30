#include<bits/stdc++.h>
using  namespace std;
void insertionsort(int x[],int n)
{
int temp=0,i=0,j=0;
for(i=1;i<n;i++)
{
temp=x[i];
j=i-1;
while(temp<x[j]&&j>=0)
{
x[j+1]=x[j];
j--;
}
x[j+1]=temp;
}
}

void insertionsort1(int x[],int n)
{
int temp=0,i=0,j=0;
for(i=1;i<n;i++)
{
temp=x[i];
j=i-1;
while(temp>x[j]&&j>=0)
{
x[j+1]=x[j];
j--;
}
x[j+1]=temp;
}
}


int main()
{
//clrscr();
int a[100],n=0,i=0;
cout<<"Enter number of elements in array";
cin>>n;
cout<<"Enter the elements";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"The old array is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n\n";
insertionsort(a,n);
cout<<"The ascending order is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n\n";
insertionsort1(a,n);
cout<<"The descending order is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
//getch();
}
