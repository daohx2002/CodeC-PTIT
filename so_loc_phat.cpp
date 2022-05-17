#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int test;
	cin >>test;
	while(test--){
		long long n;
		cin >> n;
		int dem=0;
		while(n){
			int a = n % 10;
			if(a != 0 && a != 6 && a != 8){
				cout << "NO" << endl;
				dem ++;
				break;
			}
			n /= 10;
		}
		if(dem==0){
			cout << "YES" << endl;
		}
	}
}
