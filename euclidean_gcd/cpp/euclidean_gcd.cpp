// add your code here
#include <bits/stdc++.h>
 using namespace std;

int euclidean_gcd(int num1, int num2){
  if(num1 == 0){ return num2; }
  return euclidean_gcd(num2 % num1, num1) }

int main(){
  int a = 10;
  int b = 15;
  cout << "gcd of " << a << " & " << b << " -> " << euclidean_gcd(a,b) << endl;
  return 0;
}
  
