/* Created by SubCoder1 on 31-May-18.

     Sorting Technique -- Merge Sort
     Input             -- A sequence of n numbers
     Output            -- Reordered into a definite sequence {Ascending(HERE)}

     Time Complexity :-
        Worst Case - O(NLogN)
        Best  Case - O(NlogN)
        Avg.  Case - θ(NlogN)
 */


#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1+1], right[n2+1];

    for (int i = 0; i < n1; i++) { left[i] = arr[low + i]; }
    for (int j = 0; j < n2; j++) { right[j] = arr[mid + 1 + j]; }

    int m = 0, n = 0, k = 0;

    while (m != n1 && n != n2) {
        if (left[m] <= right[n]) {
            arr[low + k] = left[m];
            m++;
        } else {
            arr[low + k] = right[n];
            n++;
        }
        k++;
    }

    while (m != n1) {
        arr[low + k] = left[m];
        m++;
        k++;
    }
    while (n != n2) {
        arr[low + k] = right[n];
        n++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int low, int high){

    if(high > low){
        int mid;
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int inpt;
    vector<int> arr;
    cout << "Unsorted Input -- ";
    while(cin.peek() != '\n'){
        cin >> inpt;
        arr.push_back(inpt); }

    mergeSort(arr, 0, arr.size()-1);

    cout << "\nSorted Output -- ";

    for(auto i: arr){ cout << i << " "; }
    return 0;
}
