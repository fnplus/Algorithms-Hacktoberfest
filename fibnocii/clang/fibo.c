#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n(<=2)\n");
    scanf("%d",&n);
    int f0=0;
    int f1=1;
    printf("0 1 ");
    for(int i=2;i<=n;i++){
        int temp=f1;
        f1=f1+f0;
        f0=temp;
        printf("%d ",f1);
    }
    return 0;
}
