#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		long long n;
		cin >> n;
		long long a =n;
		long long tmp=0;
		while(n){
			tmp = tmp*10 + n%10;
			n /= 10;
		}
		if(tmp == a){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}
