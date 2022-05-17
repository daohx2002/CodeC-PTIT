#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	long long tong=0;
	long long a=1;
	for(int i=1; i<=n; i++){
		a *= i;
		tong += a;
	}
	cout << tong ;
}
