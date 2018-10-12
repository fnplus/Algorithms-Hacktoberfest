import java.util.Scanner;
import java.util.Arrays;

public class BinarySearch  { 
    
    static int binarySearch(int arr[], int l, int r, int x) { 
        if (r>=l) { 
            int mid = l + (r - l)/2; 
            if (arr[mid] == x) 
               return mid; 
            if (arr[mid] > x) 
               return binarySearch(arr, l, mid-1, x); 
            return binarySearch(arr, mid+1, r, x); 
        } 
        return -1; 
    } 
    public static void main(String args[]) { 
        Scanner in=new Scanner(System.in);         
        //enter size of array
        int size=in.nextInt();
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
          arr[i]=in.nextInt();
      
        //sorting the array  
        Arrays.sort(arr);
      
        //enter value to be searched
        int x=in.nextInt();
      
        //getting index of x
        int index = binarySearch(arr,0,arr.length,x); 
        if (index == -1) 
            System.out.println("Element not present"); 
        else
            System.out.println("Element found at index " + index); 
    } 
}
