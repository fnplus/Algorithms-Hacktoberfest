//Travelling sales man problem
//Contributor's algorithm. Anything smaller than this is aprreciated. If so feel free to make commits.

#include<stdio.h>

int a[10][10], visited[10], n, cost = 0;
int least(int);
void mincost(int city) {
  int i, ncity;
  visited[city] = 1;
  printf("%d-->", city + 1);
  ncity = least(city);
  if (ncity == 999) {
    ncity = 0;
    printf("%d", ncity + 1);
    cost += a[city][ncity];
    return;
  }
  mincost(ncity);
}
int least(int c) {
  int i, nc = 999;
  int min = 999, kmin;
  for (i = 0; i < n; i++) {
    if ((a[c][i] != 0) && (visited[i] == 0))
      if (a[c][i] < min) {
        min = a[i][0] + a[c][i];
        kmin = a[c][i];
        nc = i;
      }
  }
  if (min != 999)
    cost += kmin;
  return nc;
}
int main() {
  int i, j;
  printf("Enter the number of cities:");
  scanf("%d", & n);
  for (i = 0; i < n; i++) {
    printf("\n Enter elements of row %d:\n", i + 1);
    for (j = 0; j < n; j++)
      scanf("%d", & a[i][j]);
    visited[i] = 0;
  }
  printf("\n\n The path is:\n\n");
  mincost(0);
  printf("\n\n Minimum Cost: %d", cost);
  return 0;
}
