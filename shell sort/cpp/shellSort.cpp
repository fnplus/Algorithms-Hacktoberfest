// Prg of SHELL SORT in C++

#include <iostream>
using namespace std;


int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            /* add a[i] to the elements that have been gap sorted
               save a[i] in temp and make a hole at position i */
            int temp = arr[i];

            /* shift earlier gap-sorted elements up until the correct
               location for a[i] is found */
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            // put temp (the original a[i]) in its correct location
            arr[j] = temp;
        }
    }
    return 0;
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


// MAIN
int main()
{
    int arr[] = {5, 4, -3, 2, 1}, i;
    int n = sizeof(arr) / sizeof(arr[0]);

    shellSort(arr, n);

    cout << "\nArray after sorting: \n";
    printArray(arr, n);

    return 0;
}
