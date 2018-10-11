import java.util.Comparator;
import java.util.Random;
public class Quicksort {
    public static final Random RND = new Random();      
    private void swap(Object[] array, int i, int j) {
        Object tmp = array[i];
        array[i] = array[j];
array[j] = tmp;
    }
    private int partition(Object[] array, int begin, int end, Comparator cmp) {
        int index = begin + RND.nextInt(end - begin + 1);
        Object pivot = array[index];
        swap(array, index, end);                
        for (int i = index = begin; i &lt end; ++ i) {
            if (cmp.compare(array[i], pivot) &lt= 0) {
                swap(array, index++, i);
        }   }
        swap(array, index, end);        
        return (index);
    }
    private void qsort(Object[] array, int begin, int end, Comparator cmp) {
        if (end &gt begin) {
            int index = partition(array, begin, end, cmp);
            qsort(array, begin, index - 1, cmp);
            qsort(array, index + 1,  end,  cmp);
    }   }
    public void sort(Object[] array, Comparator cmp) {
        qsort(array, 0, array.length - 1, cmp);
    }
}
