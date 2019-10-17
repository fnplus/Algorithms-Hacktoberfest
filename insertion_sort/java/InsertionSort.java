public static void main(String[] args) throws IOException {
    
    int amount = 10000;
    int[] array = new int[amount];
    
    for (int i = 0; i < array.length; i++) {
     array[i] = (int) (Math.random()*amount);
    }
    
     insertionSort(array);
}
    
public static void insertionSort(int[] array) {
    int j;
    int key;
    int i;
    
    for (j = 1; j < array.length; j++)
    {
      key = array[j];
      for (i = j - 1; (i >= 0) && (array[i] > key); i--)
      {
         array[i + 1] = array[i];
       }
        array[i + 1] = key;
    }
}
