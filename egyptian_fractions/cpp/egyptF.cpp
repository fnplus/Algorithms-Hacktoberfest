// Egyptian Fraction in C++


#include <iostream>
using namespace std;

void printEgyptian(int nr, int dr)
{
    if (dr == 0 || nr == 0)
        return;

    // If numerator divides denominator
    if (dr % nr == 0)
    {
        cout << "1/" << dr / nr;
        return;
    }

    // If denominator divides numerator
    if (nr % dr == 0)
    {
        cout << nr / dr;
        return;
    }

    // If numerator is greater than denominator
    if (nr > dr)
    {
        cout << nr / dr << " + ";
        printEgyptian(nr % dr, dr);
        return;
    }

    // the default path
    int n = dr / nr + 1;
    cout << "1/" << n << " + ";

    // Recur for remaining
    printEgyptian(nr * n - dr, dr * n);
}


// MAIN
int main()
{
    int nr, dr;
    cout << "Enter numerator and denominator: \n";
    cin >> nr >> dr;
    cout << "Egyptian Fraction Representation is: \n ";
    printEgyptian(nr, dr);
    return 0;
}
