#include<iostream>
using namespace std;
void swap1(int *a,int *b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition1(int arr[],int start,int last)
{

    int pivot=arr[last];
    int current=start;
    int i;
    for( i=start;i<last;i++)
    {
        if(arr[i]<=pivot)
        {

            swap1(&arr[i],&arr[current]);
            current++;
        }



    }

swap1(&arr[last],&arr[current]);

return current;
}


void quicksort(int arr[],int start,int last)
{
    if(start<last)
    {
        int p_index=partition1(arr,start,last);
        quicksort(arr,start,p_index-1);
        quicksort(arr,p_index+1,last);


    }



}

int main()
{
    cout<<"ENTER SIZE"<<endl;
    int n;
    cin>>n;
int *arr;
arr=new int[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
int start=0;
int last=n-1;
quicksort(arr,start,last);
cout<<endl;
for(int i=0;i<n;i++)
{

    cout<<arr[i]<<" ";
}
}
