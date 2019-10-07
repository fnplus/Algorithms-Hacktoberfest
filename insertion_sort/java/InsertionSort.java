class InsertionSort {
	public static void main(String[] args) {

		int[] unsortiert = { 4, 1, 8, -3, 5, 7 };
		int[] sortiert = insertionSort(unsortiert);

		for (int i = 0; i < sortiert.length; i++) {
			System.out.print(sortiert[i] + ", ");
		}

	}

	public static int[] insertionSort(int[] sortieren) {
		int temp;
		for (int i = 1; i < sortieren.length; i++) {
			temp = sortieren[i];
			int j = i;
			while (j > 0 && sortieren[j - 1] > temp) {
				sortieren[j] = sortieren[j - 1];
				j--;
			}
			sortieren[j] = temp;
		}
		return sortieren;
	}
}
