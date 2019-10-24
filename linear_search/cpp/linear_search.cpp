#include<iostream>
using namespace std;
int main()
{
	int arr[100];
  int i=0;
  int n=0;
  int flag=0;
  int size=0;
  int p=0;
	cout<<"Enter size of array  "<<endl;
	cin>>size;
	cout<<"Enter Elements of the array "<<endl;
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be found  ";
	cin>>n;
	for(i=0; i<size; i++)
	{
		if(arr[i]==n)
		{
			flag=1;
			p=i;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Number is not in the array";
	}
  if (flag==1)
	{
		cout<<"number is  found at array index "<<p;
	}

  return 0;
}
