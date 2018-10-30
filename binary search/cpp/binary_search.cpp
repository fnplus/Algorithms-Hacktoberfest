
#include <iostream>
#include <iterator>
#include <random>
#include <vector>
#include <algorithm>
#include <string>

// put in seperate namespace to avoid msvc issues on windows
namespace algo
{
    template<typename Iterator,
        typename T = typename std::iterator_traits<Iterator>::value_type>
    bool binary_search(Iterator begin, Iterator end, T value) 
    { 
        if (end >= begin) 
        { 
                auto distance = std::distance(begin, end);
                auto mid = begin + (distance)/2; 
        
                // If the element is present at the middle  
                // itself 
                if (*mid == value)   
                    return true; 
        
                // If element is smaller than mid, then  
                // it can only be present in left subarray 
                if (*mid > value)  
                    return algo::binary_search(begin, mid-1,value); 
        
                // Else the element can only be present 
                // in right subarray 
                return algo::binary_search(mid+1, end, value); 
        } 
        
        // We reach here when element is not  
        // present in array 
        return false;
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
    std::uniform_int_distribution<int> distribution(25, 35);

    std::vector<int> test(data_size);
    std::generate(test.begin(), test.end(), [&]()
    {
        return distribution(engine);
    });

    // binary search assumes that input is sorted. 
    std::sort(test.begin(), test.end());
    print_vector(test);
    std::cout << std::endl;
    auto found = algo::binary_search(test.begin(), test.end(), 30);
    if(found)
    {
        std::cout << "Data contains 30 " << std::endl;
    }
    else{
        std::cout <<"Data doesn't contain value " << std::endl;
    }

    return 0;
}

