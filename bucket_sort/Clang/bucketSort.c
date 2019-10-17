// Bucket Sort in C

#include <stdio.h>

int getMax(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

void bucketSort(int array[], int size)
{
    int bucket[10];
    const int max = getMax(array, size);
    for (int i = 0; i <= max; i++)
    {
        bucket[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        bucket[array[i]]++;
    }
    for (int i = 0, j = 0; i <= max; i++)
    {
        while (bucket[i] > 0)
        {
            array[j++] = i;
            bucket[i]--;
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {5, 4, 3, 2, 1};
    int size = sizeof(data) / sizeof(data[0]);
    bucketSort(data, size);
    printf("Sorted array is: \n");
    printArray(data, size);
}