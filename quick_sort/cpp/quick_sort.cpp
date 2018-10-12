
//QuickSort

#include <stdio.h> 
#include <stdlib.h>

void trocaPosicao(int* valorA, int* valorB){
	int aux;

	aux=*valorB;
	*valorB = *valorA;
	*valorA = aux;
}


int partition(int *c, int p, int r){
    	
    int x = c[r];
    int i = p-1;
    int j;
    for (j=p; j<r;j++){
        if (c[j]<=x){
            i = i +1;
            trocaPosicao(&c[i],&c[j]);
        }
    }
       trocaPosicao (&c[i+1],&c[r]);
    return i+1;
}


void quickSort(int *c, int p, int r){

    if (p<r){
        int q=partition(c,p, r);
            quickSort(c, p, (q-1));
            quickSort(c, q+1,r);
        }
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

   quickSort(arr, 0, size); 

   printf("Sorted array: "); 
   printArray(arr, size); 

   return 0; 
} 
