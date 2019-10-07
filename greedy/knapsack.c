#include<stdio.h>
int main() 
{
  int w[20], p[20], r[20], temp, cap, n, i, j;
   printf("\nEnter the no. of objects:- ");
   scanf("%d", &n);
   printf("\nEnter the wts and profits of each object:- ");
   for (i = 0; i < n; i++) {
		printf("For item no %d\n", i);
      scanf("%d %d", &w[i], &p[i]);
   }
   printf("\nEnter the capacity:\n ");
   scanf("%d", &cap);
   for (i = 0; i < n; i++) {
      r[i] = p[i] / w[i];
   }
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (r[i] < r[j]) {
            temp = r[j];
            r[j] = r[i];
            r[i] = temp;
 
            temp = w[j];
            w[j] = w[i];
            w[i] = temp;
 
            temp = p[j];
            p[j] = p[i];
            p[i] = temp;
         }
      }
   }
   knap(n, w, p, cap);
   return(0);
}
void knap(int n, int w[], int p[], int cap) {
   int i, j, u= cap, x[20], tp = 0;
   for (i = 0; i < n; i++)
      x[i] = 0;
   for (i = 0; i < n; i++) {
      if (w[i] > u)
         break;
      else {
         x[i] = 1;
         tp = tp + p[i];
         u = u - w[i];
      }
   }
   if (i < n)
      x[i] = u / w[i];
   tp = tp + (x[i] * p[i]);
   printf("\nTotal profit is:- %d", tp);
}
