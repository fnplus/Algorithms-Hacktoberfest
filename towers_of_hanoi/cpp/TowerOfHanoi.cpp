#include<iostream>
using namespace std;
void toh(int n, char first, char second, char third)
{
    if (n==1)
    {
        cout<<"Disk 1: from rod "<<first<<" to rod "<<second<<endl;
        return;
    }
    toh(n-1, first, third, second);
    cout<<"Disk "<<n<<": from rod "<<first<<" to rod "<<second<<endl;
    toh(n-1, third, second, first);
}
int main()
{
    int n=3;
    toh(n, 'A', 'B', 'C');
    return 0;
}
