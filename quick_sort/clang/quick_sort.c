#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot = a[high];
	int i = low-1;
	for(int j=low;j<=high-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
			}	
	}	
	swap(&a[i+1],&a[high]);
	return i+1;
}
void quickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quickSort(a,low,pi-1);
		quickSort(a,pi+1,high);
	}
}

int main()
{
	int a[10],n;
	printf("Enter the number of elements you want to enter in the array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	printf("\nThe sorted array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

