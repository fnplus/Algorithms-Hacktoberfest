#include"header.cpp"

int Binarysearch(int a[],int n,int e)
{
int beg=0,end=n-1,mid=0;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==e)
return mid;
else if(a[mid]<e)
beg=mid+1;
else
end=mid-1;
}
return -1;
}

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

void main()
{
clrscr();
int e=0,n=0,x[100];
cout<<"Enter number of elements in array";
cin>>n;
cout<<"Enter elements of array";
for(int i=0;i<n;i++)
cin>>x[i];
cout<<"Enter element to be searched";
cin>>e;
bubblesort(x,n);

int k=Binarysearch(x,n,e);
if(k>=0)
cout<<"Element found at position- "<<k;
else
cout<<"Element not found";
getch();
}
