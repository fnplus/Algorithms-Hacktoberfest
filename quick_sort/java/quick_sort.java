import java.util.Arrays;

public class Quick {

    public static void main(String [] args) {
        int [] array1 = {9, 0, -2, 89, 1, 2, 3, -3, -99, 6};
        quicksort(array1, 0, array1.length);
        System.out.println(Arrays.toString(array1));
    }

    /**
     * Implementation of quick sort algorithm
     * @param array1 Array wich will be sorted.
     * @param startIndex start index in array.
     * @param endIndex last index in array
     */
    public static void quicksort(int[] array1, int startIndex, int endIndex) {
        int pivotValue = getPivot(array1, startIndex, endIndex);
        int currentStartIndex = startIndex;
        int currentEndIndex = endIndex - 1;

        while (currentStartIndex < currentEndIndex) {
            while (array1[currentStartIndex] < pivotValue) currentStartIndex++;
            while (array1[currentEndIndex] > pivotValue) currentEndIndex--;
            if (currentStartIndex < currentEndIndex) {
                int buffer = array1[currentStartIndex];
                array1[currentStartIndex] = array1[currentEndIndex];
                array1[currentEndIndex] = buffer;
            }
        }
        if (currentStartIndex > startIndex) quicksort(
                array1, startIndex, currentStartIndex);
        if (endIndex > currentStartIndex + 1) quicksort(
                array1, currentStartIndex + 1, endIndex);
    }


    /**
     * In this implementation pivot element is
     * last element of array.
     * @param array1
     * @param lowIndex
     * @param highIndex
     * @return Value of pivot element of array.
     */
    public static int getPivot(int[] array1, int startIndex, int endIndex) {
        return array1[endIndex - 1];
    }
}