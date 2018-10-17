// add your code here :

public class QuickSort {


    private static int tab[];
    private static int n;

    public QuickSort(int n, int[] tab) {
        this.n = n;
        this.tab = tab;
        quicksort(tab,0,n);
    }

    private static void quicksort(int tab[], int x, int y) {

        int i, j, v, temp;
        i = x;
        j = y;
        v = tab[(x + y) / 2];
        do {
            while (tab[i] < v) {
                i++;
            }
            while (v < tab[j]) {
                j--;
            }

            if (i <= j) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
                i++;
                j--;
            }
        }
        while (i <= j);

        if (x < j)
            quicksort(tab, x, j);
        if (i < y)
            quicksort(tab, i, y);

    }
}
