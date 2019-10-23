#include <iostream>
using namespace std;

int main()
{
     int k, num, digit, rev1 = 0;
     cout<<"Enter one number: ";
     cin>>num;
     k= num;
    do
     {
         digit = num % 10;
         rev1 = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
        if (k == rev1)
         cout << " palindrome";
     else
         cout << "not a palindrome";
    return 0;
}
