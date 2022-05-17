#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long n;
		cin >> n;
		long long x=1;
		for(long long i=1; i<=n;i++){
			x = x*i/__gcd(x, i);		
		}
		cout << x << endl;
	}
}
