#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 20;
	map<int, int> primes;
	for(int i = 2;i <= sqrt(n); i++){ /// getting the prime factorization of n
		while(n % i == 0){
			primes[i]++;
			n/=i;
		}
	}
	if(n != 1)primes[n]++;
	int quantity_of_divisors = 1;
	for(auto e : primes){
		quantity_of_divisors *= (e.second+1);
	}
	cout<<quantity_of_divisors<<endl;
	return 0;
}