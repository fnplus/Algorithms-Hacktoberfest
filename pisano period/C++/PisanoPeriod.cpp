#include<bits/stdc++.h>
using namespace std;

long long int A[1000000];

long long int findPeriod(long long int m){
	A[0]=0;
	A[1]=1;
	int i;
	for(i=2;i<=m*m;i++){
		A[i] = (A[i-1] + A[i-2])%m;
		A[i+1] = (A[i] + A[i-1])%m;
		if(A[i]%m == 0  && A[i+1]%m == 1)
			break;	
	}
	return i;
}

int main(){
	long long int n,m,p;
	cout<<"Enter a number ";
	cin>>m;
	p=findPeriod(m);
	cout<<"\nThe Pisano Period is "<<p;
	return 0;
}
