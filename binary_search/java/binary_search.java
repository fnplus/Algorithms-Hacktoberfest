// add your code here :

 public boolean binary_search(int tab[], int x){
        int start=0, end = tab.length - 1, avg = 0;
        while(start < end){
            avg = (start + end)/2;
            if(x > tab[avg])
                start = avg +1;
            else
                end = avg;
        }
        if(tab[start] == x)
            return true;
        else
            return false;
    }
