#include<iostream>
#include<conio.h>
#include<algorithm>

int binary_search(int A[],int f,int l,int num)
{int mid;
mid=(f+l)/2;
if(num==A[mid])
 return mid;

elseif(num>A[mid])
{binary_search(A,mid+1,l,num);}

elseif(num<A[mid])
{binary_search(A,f,mid-1,num);

else
return(-1);
}
 
int main()
{int a[100],n,d,x;
 cout<<"how many numbers?";
 cin>>n;

 cout<<"enter numbers";
 for(int i=0;i<n;i++)
 cin>>a[i];
 
 sort(a,a+n);
 
 cout<<"Enter the number you wish to search";
 cin>>d;

 x=binary_search(a,0,n-1,d);

 if(x!=-1)
  cout<<"number is at "<<x+1<<"position";
 else
  cout<<"number not found";
return 0;
}
