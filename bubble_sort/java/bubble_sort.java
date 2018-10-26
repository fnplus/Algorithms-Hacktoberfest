
import java.util.Arrays;

class BubbleSort {

    // An optimized version of Bubble Sort 
    static void bubbleSort(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // Function to print an array  
    static void printArray(int arr[]) {
        System.out.println(Arrays.toString(arr));
    }

    // Driver program 
    public static void main(String args[]) {
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
        int n = arr.length;
        bubbleSort(arr);
        System.out.println("Sorted array: ");
        printArray(arr);
    }
}
