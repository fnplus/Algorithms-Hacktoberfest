#include<iostream>
using namespace std;
///elements in array should be sorted
bool binarysearch(int arr[],int num,int low,int high)
{
int flag=0;
int mid;
if(low<=high)
{

mid=(low+high)/2;
if(arr[mid]<num)
{
low=mid+1;

}
else
{
high=mid-1;
}
if(num==arr[mid])
{
    flag=1;
return true;

}
binarysearch(arr,num,low,high);
}
else
{

    return false;
}
}

int main()
{
int n;
cout<<"Enter size"<<endl;
cin>>n;
int *arr;
arr=new int[n];
for(int i=0;i<n;i++)
{

    cin>>arr[i];
}

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {

        if(arr[i]>arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;


        }
    }

}
int num;
cout<<"Enter num you want to search in an array"<<endl;
cin>>num;
int low=0;
int high=n-1;
if(binarysearch(arr,num,low,high)==true)
{
   cout<<"ELEMNET FOUND"<<endl;

}
else
{

    cout<<"ELEMNET NOT FOUND"<<endl;
}

return 0;
}
