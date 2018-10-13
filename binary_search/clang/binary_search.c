#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *ar, int start, int end, int find)
{
	if(start > end) return -1;
	
	if(start + 1 == end) {
		if(ar[start] == find) return start;
		if(ar[end] == find) return end;

		return -1;
	}
	else if(start == end) {
		if(ar[start] == find) return start;
		return -1;
	}

	int mid = start + (end-start)/2;

	if(ar[mid] == find) {
		return mid;
	}
	else if(ar[mid] > find) {
		return binarySearch(ar, start, mid, find);
	}
	return binarySearch(ar, mid, end, find);
}

int main(int argc, char const *argv[])
{
	int i, n, d;
	int find;

	scanf(" %d", &n);
	int ar[n];

	for(i = 0; i < n; i++) {
		scanf(" %d", &d);
		ar[i] = d;
	}

	scanf(" %d", &find);
	printf("%d\n", binarySearch(ar, 0, n-1, find));

	return 0;
}