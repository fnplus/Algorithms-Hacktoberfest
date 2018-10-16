public class MergeSort {
        private static int[] exArray;
    public static void sort(int[] arrayToSort){
        exArray = new int[arrayToSort.length];
        mergeSort(arrayToSort,0,arrayToSort.length-1);
    }

    private static void mergeSort(int[]array,int leftIndex,int rightIndex){
        if(leftIndex<rightIndex)
        {
            int middleIndex = (leftIndex+rightIndex)/2;
            mergeSort(array,leftIndex,middleIndex);
            mergeSort(array,middleIndex+1,rightIndex);
            merge(array,leftIndex,middleIndex,rightIndex);
        }
    }
    private static void  merge(int[]array,int leftIndex,int middleIndex, int rightindex){
        for(int i=leftIndex;i<=rightindex;i++)
        {
            exArray[i]=array[i];
        }

        int pointer1 = leftIndex;
        int pointer2 = middleIndex+1;
        int current = leftIndex;
        while(pointer1 <= middleIndex && pointer2<=rightindex)
        {
            Main.iterationCounter++;
            if(exArray[pointer1]<=exArray[pointer2])
            {
                array[current] = exArray[pointer1];
                pointer1++;
            }
            else
            {

                array[current] = exArray[pointer2];
                pointer2++;
            }
            current++;
        }
        while(pointer1<= middleIndex){
            array[current] = exArray[pointer1];
            pointer1++;
            current++;

        }

    }

}
