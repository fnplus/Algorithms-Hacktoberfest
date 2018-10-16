/* Created by SubCoder1 on 31-May-18.
     
     Sorting Technique -- Quick Sort
     Input             -- A sequence of n numbers
     Output            -- Reordered into a definite sequence {Ascending(HERE)}

     Time Complexity :- 
        Worst Case - O(N^2)
        Average Case - O(NlogN)
        Best  Case - O(NLogN)
 */


#include <iostream>
#include <vector>

 using namespace std;

int Partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1, temp;

    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i += 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return (i+1);
}

void QuickSort(vector<int> &arr, int low, int high){
    if(low < high){

        int mid = Partition(arr, low, high);

        QuickSort(arr, low, mid - 1);
        QuickSort(arr, mid + 1, high);
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

    QuickSort(arr, 0, arr.size()-1);

    cout << "\nSorted Output -- ";

    for(auto i: arr){ cout << i << " "; }  // if your compiler supports C++11 or above
    
    //for(int i = 0; i < arr.size(); i++){ cout << arr[i] << " "; } //if your compiler doesn't support C++11 or above
    return 0;
}
