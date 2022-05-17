#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void check(long long n){
	long long k=0;
	while(n % 2 == 0){
		k = 2;
		n /= 2;
	}
	for(long long i=3; i<=sqrt(n); i+=2){
		while(n % i == 0){
			k = i;
			n /= i;	
		}
	}
	if(n > 2){
		cout << n;
	}
	else cout << k;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		long long n;
		cin >> n;
		check(n);
		cout << endl;
	}
}
