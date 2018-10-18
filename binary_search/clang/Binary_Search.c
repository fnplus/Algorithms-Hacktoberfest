
  #include <stdio.h>
  #include <stdlib.h>
  void sort(int *data, int n) {
        int i, j, temp;
        for (i = 1; i < n; i++) {
                temp = data[i];
                for (j = i; j > 0 && data[j-1] > temp; j--) {
                        data[j] = data[j-1];
                }
                data[j] = temp;
        }
  }

  int main() {
        int i, high, low, mid, n, *data, element, ch = 1;
        printf("Binary Search Example:\n");
        printf("Enter the number of entries:");
        scanf("%d", &n);
        
        data = (int *)malloc(sizeof (int) * n);
        for (i = 0; i < n; i++) {
                scanf("%d", &data[i]);
        }
        sort(data, n);
        printf("After sorting:");
        for (i = 0; i < n; i++)
                printf("%3d ", data[i]);
        printf("\n");
        while (ch) {
                printf("Enter the data to be searched:");
                scanf("%d", &element);
                low = 0, high = n-1;
                while (low <= high) {
                        mid = (high + low) / 2;
                        if (data[mid] < element)
                                low = mid + 1;
                        else if (data[mid] > element)
                                high = mid - 1;
                        else {
                                printf("Search element %d found "
                                        "at index %d\n", element, mid);
                                break;
                        }
                }
                printf("Searched element is not available\n");
                printf("Do you wanna continue search(1/0):");
                scanf("%d", &ch);
        }
        return 0;
  }
