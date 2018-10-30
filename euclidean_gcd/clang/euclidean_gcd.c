#include <stdio.h>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a, b;
    printf("Inform the vales of a and b: ");
    scanf("%d %d", &a, &b);
    printf("GCD(%d, %d): %d\n", a, b, gcd(a, b));
    return 0;
}
