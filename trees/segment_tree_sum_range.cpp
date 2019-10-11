#include<bits/stdc++.h>
using namespace std;

//construct a segment tree from an array
int construct(int arr[],int l,int r,int i,int s[])
{
	if(l==r)
	{
		s[i]=arr[l];
		return s[i];
	}
	int mid=l+(r-l)/2;
	s[i]=construct(arr,l,mid,2*i+1,s)+construct(arr,mid+1,r,2*i+2,s);
	return s[i];
}

int getsum(int s[],int l,int r,int sl,int sr,int i)
{
	if(sl>r||sr<l)
	return 0;
	if(sl>=l&&sr<=r)
	return s[i];
	int mid=sl+(sr-sl)/2;
	return getsum(s,l,r,sl,mid,2*i+1)+getsum(s,l,r,mid+1,sr,2*i+2);
}

int update(int s[],int i,int diff,int l,int r,int index)
{
	if(l<=i&&r>=i)
	s[index]+=diff;
	else
	return 0;
	if(l!=r)
	{
		int mid=l+(r-l)/2;
		update(s,i,diff,l,mid,2*index+1);
		update(s,i,diff,mid+1,r,2*index+2);
	}

}
int main()
{
	int arr[]={1,2,3,4,5},s[100];
	int size_s=2*(sizeof(arr)/sizeof(int))-1;
	int size_arr=sizeof(arr)/sizeof(int)-1;
	//construct(arr,0,arr_size-1,start node of s,s)
	construct(arr,0,size_arr,0,s);
	for(int i=0;i<size_s;i++)cout<<s[i]<<" ";
	cout<<endl;
	//getsum(s,[l,r],0,arr_size-1,start node of s)
	cout<<getsum(s,1,3,0,size_arr,0);
	cout<<endl;
	//update(s,index,diff to be added,0,arr_size-1,start node of s)
	//also update main array(not done here)
	update(s,2,1,0,size_arr,0);
	for(int i=0;i<size_s;i++)cout<<s[i]<<" ";
	cout<<endl;
	return 0;
}
