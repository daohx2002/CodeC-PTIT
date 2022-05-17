#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, dem=0;
	cin >> n;
	while(n % 2 == 0){
		dem++;
		n /= 2;
	}
	if(dem != 0){
		cout << "2" << " " << dem << endl;
	}
	for(long long i=3; i<=sqrt(n); i+=2){
		dem=0;
		long long x;
		while(n % i == 0){
			x = i;
			dem++;
			n /= i;
		}
		if(dem != 0){
			cout << x << " " << dem << endl;
		}
	}
	if(n > 2) cout << n << " " << "1" << endl;
}
