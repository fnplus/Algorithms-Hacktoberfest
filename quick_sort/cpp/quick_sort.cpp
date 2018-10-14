#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>

template<typename T>
void swap(T& a, T& b)
{
    int temp = a;
    a = b;
    b = temp;
}

template<typename T>
int partition (std::vector<T> &arr, int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
  
template<typename T>
void quick_sort(std::vector<T> &arr, int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quick_sort(arr, low, pi - 1); 
        quick_sort(arr, pi + 1, high); 
    } 
} 

template<typename T>
void print_vector(const std::vector<T> &vec)
{
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(std::cout, ", "));
}

int main()
{
    const int data_size = 20;
    std::random_device device;
    std::default_random_engine engine(device());
    std::uniform_int_distribution<int> distribution(1, 1000);

    std::vector<int> test(data_size);
    std::generate(test.begin(), test.end(), [&]()
    {
        return distribution(engine);
    });

    std::cout <<"Data before: ";
    print_vector(test);
    std::cout << std::endl;
    quick_sort(test, 0, test.size() - 1);

    std::cout << "Data after: ";
    print_vector(test);
    std::cout << std::endl;
    return 0;
}