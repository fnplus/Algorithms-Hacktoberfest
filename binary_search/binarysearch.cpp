#include<iostream>
#include<conio.h>

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
