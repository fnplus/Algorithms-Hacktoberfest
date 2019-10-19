void heap(List list, int n, int i) {
  int largest = i;
  int l = 2*i + 1;
  int r = 2*i + 2;

  if (l < n && list[l] > list[largest]) {
    largest = l;
  }

  if (r < n && list[r] > list[largest]) {
    largest = r;
  }

  if (largest != i) {
    swapList(list, i, largest);
    heap(list, n, largest);
  }
}

void swapList(List list, int i, int largest) {
  int swap = list[i];
  list[i] = list[largest];
  list[largest] = swap;
}

void heapSort(List list){
  int n = list.length;
  for (int i = (n ~/ 2 ) ; i >= 0; i--){
    heap(list, n, i);
  }

  for (int i = n-1; i>=0; i--) {
    swap(list, i);
    heap(list, i, 0);
  }
}

void swap(List list, int i) {
  int temp = list[0];
  list[0] = list[i];
  list[i] = temp;
}