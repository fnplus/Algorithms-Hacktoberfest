/*Fibonaaci
0 1 1 2 3 5 8 13 21 ...(0+1=1,1+1=2,2+1=3,3+2=5,5+3=8......)
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n=0,z=0,x=1,y=0;
cout<<"FIBONAACI SEQUENCE\n";
cout<<"Enter no. of terms";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<z<<"\a\a ";
z=x+y;
x=y;
y=z;
}
getch();
}