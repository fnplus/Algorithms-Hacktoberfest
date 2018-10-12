#include <stdio.h>
#include <stdbool.h>

void print(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]);
}

void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void bubbleSort(int arr[], int size) 
{
    bool haveSwapped;
    int i, j = 0;
    
    do
    {
        haveSwapped = false;
        for (i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(&arr[i], &arr[i+1]); 
                haveSwapped = true; 
            }
        }
        j++;
    } while (haveSwapped);
}

int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1};  
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    printf("Sorted array: \n"); 
    print(arr, n); 
    return 0; 
}
