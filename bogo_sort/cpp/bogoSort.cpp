// BOGO SORT in C++

#include <bits/stdc++.h>
using namespace std;


bool isSorted(int a[], int n)
{
    while (--n > 1)
        if (a[n] < a[n - 1])
            return false;
    return true;
}


void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}


void bogosort(int a[], int n)
{
    while (!isSorted(a, n))
        shuffle(a, n);
}


void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}


// MAIN
int main()
{
    int a[] = {5, 4, 2, 1, 3};
    int n = sizeof a / sizeof a[0];
    bogosort(a, n);
    printf("Sorted array :\n");
    printArray(a, n);
    return 0;
}
