#include"header.cpp"
void bubblesort(int x[],int n)
{
int temp=0,i=0,j=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(x[j+1]<x[j])
{
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}
}
}
}

void bubblesort1(int x[],int n)
{
int temp=0,i=0,j=0;
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(x[j+1]>x[j])
{
temp=x[j];
x[j]=x[j+1];
x[j+1]=temp;
}
}
}
}


void main()
{
clrscr();
int a[100],n=0;
cout<<"Enter number of elements in array";
cin>>n;
cout<<"Enter the elements";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"The old array is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n\n";
bubblesort(a,n);
cout<<"The ascending order is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
bubblesort1(a,n);
cout<<"\n\n";
cout<<"The descending order is\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}
