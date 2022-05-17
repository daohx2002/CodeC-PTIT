#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int check(int n){
	if(n < 2) return 0;
	for(int i=3; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		if(n >= 2){
			cout << 2 << " ";
		}
		for(int i=3; i<=n; i+=2){
			if(check(i) == 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
