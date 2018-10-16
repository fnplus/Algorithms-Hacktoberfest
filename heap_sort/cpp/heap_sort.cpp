/* Created by SubCoder1 on 12-June-18.

     Sorting Technique -- Heap Sort
     Input             -- A sequence of n numbers
     Output            -- Reordered into a definite sequence { Ascending(HERE) }

     Time Complexity :-
        Worst Case - O(NlogN)
        Best  Case - O(NLogN)
        Avg.  Case - O(NlogN)
 */

#include <iostream>
#include <vector>
#include <chrono>

 using namespace std;
 using namespace std::chrono;
 using namespace std::chrono_literals;

void heapify(vector<int> &arr, int heap_size, int i){

    int L_child = 2*i + 1;
    int R_child = 2*i + 2;
    int largest = i, temp;
	
    if(L_child < heap_size && arr[L_child] >= arr[largest]){
        largest = L_child;
    }

    if(R_child < heap_size && arr[R_child] >= arr[largest]){
        largest = R_child;
    }
    if(largest != i){
        temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;

        heapify(arr, heap_size, largest);
    }

}

void HeapSort(vector <int> &arr, int heap_size){

    int temp;
    for(int i = heap_size / 2 - 1; i >= 0; i--){
        heapify(arr, heap_size, i);
    }

    for(int j = heap_size - 1; j >= 0; j--){

        temp = arr[0];
        arr[0] = arr[j];
        arr[j] = temp;

        heapify(arr, j, 0);
    }

}

int main(){
    vector<int> arr;
    int inpt;
    cout << "Unsorted Input -- ";
    while(cin.peek() != '\n'){
        cin >> inpt;
        arr.push_back(inpt);
    }
    auto start = high_resolution_clock::now();

    HeapSort(arr, arr.size());

    auto stop = high_resolution_clock::now();

    cout << "\nSorted Output -- ";
    for(auto i: arr){ cout << i << " "; }

    auto duration = duration_cast<nanoseconds> (stop - start);
    cout << "\nTime taken by this sorting algorithm -- " << duration.count();
    return 0;
}
