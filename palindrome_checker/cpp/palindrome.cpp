// Prg to check if a string is palindrome in C++

#include <iostream>
#include <string.h>
using namespace std;

void isPalindrome(char og[])
{
    char rev[100];
    /* Reversing the string */
    int i, n = strlen(og);
    for (i = 0; i < n; i++)
    {
        rev[n - 1 - i] = og[i];
    }

    if (strcmp(og, rev) == 0) /* Comparing input string with the reverse string */
        cout << "The string is a palindrome!\n";
    else
        cout << "The string is not a palindrome.\n";
}


// MAIN
int main()
{
    char og[100];
    cout << "Enter the string : ";
    cin >> og;
    isPalindrome(og);
    return 0;
}