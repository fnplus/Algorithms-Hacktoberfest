#include<stdio.h>

void main() {
  int w[100][100], c[100][100], r[100][100], p[100], q[100], temp = 0, min, min1, n, i, j, k, b;
  printf("enter the number of elements:");
  scanf("%d", & n);
  printf("\n");
  for (i = 1; i <= n; i++) {
    printf("enter the elements of %d:", i);
    scanf("%d", & p[i]);
  }
  printf("\n");
  for (i = 0; i <= n; i++) {
    printf("enter the probability of %d:", i);
    scanf("%d", & q[i]);
  }
  printf("w\t\tC\t\tR\n");
  for (i = 0; i <= n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        w[i][j] = q[i];
        c[i][j] = 0;
        r[i][j] = 0;
        printf("W[%d][%d]:%d\tc[%d][%d]:%d\tr[%d][%d]:%d\n", i, j, w[i][j], i, j, c[i][j], i, j, r[i][j]);
      }
    }
  }
  printf("\n");
  for (b = 0; b < n; b++) {
    for (i = 0, j = b + 1; j < n + 1 && i < n + 1; j++, i++) {
      if (i != j && i < j) {
        w[i][j] = p[j] + q[j] + w[i][j - 1];
        min = 30000;
        for (k = i + 1; k <= j; k++) {
          min1 = c[i][k - 1] + c[k][j] + w[i][j];
          if (min > min1) {
            min = min1;
            temp = k;
          }
        }
        c[i][j] = min;
        r[i][j] = temp;
      }
      printf("W[%d][%d]:%d\tc[%d][%d]:%d\tr[%d][%d]:%d\n", i, j, w[i][j], i, j, c[i][j], i, j, r[i][j]);
    }
    printf("\n");
  }
  printf("minimum cost=%d\n", c[0][n]);
  printf("Root=%d\n", r[0][n]);
}