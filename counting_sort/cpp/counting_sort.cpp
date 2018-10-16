/* Created by SubCoder1 on 31-May-18.

     Sorting Technique -- Counting Sort
     Input             -- A sequence of n numbers
     Output            -- Reordered into a definite sequence {Ascending(HERE)}

     Time Complexity :-
        Worst Case - O(N^2)
        Best  Case - O(N + RANGE)
 */





#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

 using namespace std::chrono;
 using namespace std;

int main(){
    int inpt;
    vector<int> store;
    vector<int>:: iterator it;

    cout << "Unsorted Input -- ";
    while(cin.peek() != '\n'){
        cin >> inpt;
        store.push_back(inpt);
    }
    
    auto start = high_resolution_clock::now();

    it = max_element(store.begin(), store.end());
    int range = *it;
    vector<int> aux(range, 0);

    for(auto i: store){ aux[i-1]+=1; }

    cout << "Sorted Output -- ";
    for(int i = 0; i < range; i++){
        for(int j = 1; j <= aux[i]; j++){
            cout << i+1 << " ";
        }
    }

    auto end = high_resolution_clock::now();

    cout << "Time Elapsed -- " << duration_cast<microseconds>(end - start).count() << " microS.\n";

}