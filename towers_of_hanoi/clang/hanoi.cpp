// Tower of Hanoi on C++
// Totally ripped off on C version
// hanoi.cpp
#include <iostream>
using namespace std;

void hanoi_tower(char peg1, char peg2, char  peg3, int n)
{
	if( n <= 0)
		cout << "\n Illegal entry ";

	if(n == 1)
		cout << "\n Move Disk from %c to %c", peg1, peg3;
	else
	{
		hanoi_tower(peg1, peg3, peg2, n-1);
		hanoi_tower(peg1, peg2, peg3, 1);
		hanoi_tower(peg2, peg1, peg3, n-1);
	}
}

/* main function */

int main()
{
	int n;
    cout << "\n Input the number of disc: ";
	cin >> n;
	cout << "\n Tower of Hanoi for %d DISC", n;
	hanoi_tower('X', 'Y', 'Z', n);

	return 0;
}