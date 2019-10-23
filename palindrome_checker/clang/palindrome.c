// Prg to check if a string is palindrome in C

#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome.\n", str);
            return;
        }
    }
    printf("%s is Palindrome!\n", str);
}


// MAIN
int main()
{
    isPalindrome("mom");
    isPalindrome("1011");
    return 0;
}
