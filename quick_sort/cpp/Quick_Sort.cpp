//partitioning algorithm
int partition(int* A,int low, int high)
{
  int pivot,temp,i;
  pivot=A[high];
  i=low-1;
  for(int j=low;j<=high-1;j++)
  {
    if(A[j]<=pivot)
    {
      i++;
      temp=A[j];
      A[j]=A[i];
      A[i]=temp;
    }
  }
  temp=A[i+1];
  A[i+1]=A[high];
  A[high]=temp;
  return i+1;
}


//recursive function quicksort
void quickSort(int* A, int low, int high)
{
	int temp,pivot,i,j,mid;
	if(low<high)
	{
		mid=partition(A,low,high);
		quickSort(A,low,mid-1);
		quickSort(A,mid+1,high);
	}
};


//driver function
int main()
{
  int n,i;
  int* A;
  cout << "enter number of elements in the array : ";
  cin >> n;
  A=new int(n);
  cout << " enter space separated array elements : ";
  for(i=0;i<n;i++)
  {
    cin >> A[i];
  }
  quickSort(A,0,n-1);
  cout << "sorted array is : ";
  for(i=0;i<n;i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;


}
