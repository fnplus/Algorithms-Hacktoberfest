// Java implementation of iterative Binary Search 
class BinarySearch { 
    // Returns index of x if it is present in arr[], 
    // else return -1 
    int binarySearch(int arr[], int l, int r, int x) 
    { 
        while (l <= r) { 
            int mid = l + (r - l) / 2; 
  
            // Check if x is present at mid 
            if (arr[mid] == x) 
                return mid; 
  
            // If x is smaller, ignore right half 
            if (arr[mid] > x) 
                return binarySearch(arr, l, mid-1, x);
  
            // If x greater, ignore left half
            else
                return binarySearch(arr, mid+1, r, x);
        } 
  
        // if we reach here, then element was 
        // not present 
        return -1; 
    } 
  
    // Driver method to test above 
    public static void main(String args[]) 
    { 
        BinarySearch ob = new BinarySearch(); 
        int arr[] = { 2, 3, 4, 10, 40 }; 
        int n = arr.length; 
        int x = 10; //this is the number to be searched
        int result = ob.binarySearch(arr, 0, n-1, x); 
        if (result == -1) 
            System.out.println("Element not present"); 
        else
            System.out.println("Element found at "
                               + "index " + result); 
    } 
}
