#include <iostream>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

using namespace std;
int main()
{
    int a, b;
    cout << "Inform the vales of a and b: ";
    cin >> a;
    cin >> b;
    cout << "GCD(" << a << ", " << b << "): " << gcd(a, b) << endl;
    return 0;
}