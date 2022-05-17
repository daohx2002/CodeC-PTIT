#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void check(long long n){
	while(n % 2 == 0){
		cout << 2 << " ";
		n /= 2;
	}
	for(long long i=3; i<=sqrt(n); i+=2){
		while(n % i == 0){
			cout << i << " ";
			n /= i;	
		}
	}
	if(n > 2) cout << n << " ";
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
