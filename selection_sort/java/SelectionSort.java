import java.util.Arrays;
import java.util.Random;

public class SelectionSort {

	public static <AnyType extends Comparable<? super AnyType>> void sort(AnyType[] array, boolean creciente) {
		if (array == null) { return; }
		
		for (int i = 0; i < array.length - 1; i++) {
			AnyType val = array[i];
			int indexVal = i;
			for (int j = i + 1; j < array.length; j++) {
				if (array[j].compareTo(val) == (creciente ? -1 : 1)) {
					val = array[j];
					indexVal = j;
				}
			}
			if (indexVal != i) {
				array[indexVal] = array[i];
				array[i] = val;
			}
		}
	}

	public static void main(String[] args) {
		final int LEN = 15;
		final int MAX_RANDOM = 100;
		final Integer[] ar = new Integer[LEN];
		Random rnd = new Random();
		for (int i = 0; i < LEN; i++) {
			ar[i] = new Integer(rnd.nextInt(MAX_RANDOM));
		}
		System.out.println(Arrays.toString(ar));
		
		sort(ar, true);
		System.out.println(Arrays.toString(ar));
		sort(ar, false);
		System.out.println(Arrays.toString(ar));
	}

}
