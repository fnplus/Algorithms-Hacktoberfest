#include <iostream>

void swap(int& x, int & y){
	// Swap without using extra variable
	x = x + y;
	y = x - y;
	x = x - y;
}

void bubblesort(int a_size, int *a) {
	bool swapped = true; //variable to let us know if we have made a swap
	int j = 0;
	while(swapped) {
		swapped = false;
		j++;
		for(int i=0; i<a_size-j; i++) { //check each index and compare its element to the i + 1 element
			if(a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
				swapped = true;
			} //if out of order, swap
		}
	} //loop breaks when a full pass through array without a single swap, meaning the array is sorted
}

void print_array(int a_size, int *a) {
	for(int i=0; i<a_size; i++) {
		std::cout << a[i] << " ";
	}
}

int main() {

	int size = 10;
	int arr[10] = {4, 2, 7, 3, 0, 9, 1, 5, 6, 8};
	bubblesort(size, arr);
	print_array(size, arr);

	return 0;
}
