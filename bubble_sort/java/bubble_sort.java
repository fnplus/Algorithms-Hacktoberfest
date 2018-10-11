// add your code here :

public static int[] bubblesort(int tab[]){

        int n = tab.length;
        int tmp = 0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n-1;j++){
                tmp = tab[j-1];
                tab[j-1] = tab[j];
                tab[j] = tmp;
            }
        }

    }
