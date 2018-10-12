
//CountingSort

#include <stdio.h> 
#include <stdlib.h>


int bigger(int *arr,int size){
    int i, bigger = arr[0];
    for(i=0;i<size;i++)
    {
        if(bigger< arr[i])
          {
              bigger= arr[i];
          }
    }
    return bigger;

}

int *countingSort(int* a, int k, int size){
  
  int *b=(int*)malloc(sizeof(int)*(size));
  int i,j;
  int c[k+1];

  for(i=0 ; i<k+1 ; i++){
    c[i]=0;
  }

  for(i=0 ; i<size ; i++){
    c[a[i]]++;
  }

  

  for(i=1; i<k+1 ; i++){
    c[i] = c[i] + c[i-1];
  }
  
  for(j = size-1 ; j>=0 ; j--){
    b[c[a[j]]-1] = a[j]; 

    (c[a[j]])--;
  }
  
  return b;
  
}

void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}


int main(void) 
{ 
   int size;

   scanf("%d", &size);
   int* arr=(int*)malloc(sizeof(int)*(size));

   for (int i = 0; i < size; ++i)
   {
   		scanf("%d", &arr[i]);
   }

   int m = bigger(arr,size);

   arr = countingSort(arr, m, size); 

   printf("Sorted array: "); 
   printArray(arr, size); 

   return 0; 
} 
