/**
@param size - it is sizoe of table
@param  hel - it is for helping me to save some data
**/
static void bubble_sort(int [] tab){
        int size = tab.length();
        int help =0;
        for(int i=0; i<size ; i++){
            for(int j=1; j < size-i; j++){
                if(tab[j-1] > tab[j]){
                    help = tab[j];
                    tab[j] = tab[j-1];
                    tab[j-1] = help;
                }
            }
        }
    }
