#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		for(int i=2; i<=n; i++){
			int dem=0;
			int x;
			while(n % i == 0){
				x = i;
				dem++;
				n /= i;
			}
			if(dem != 0){
				cout << x << " " << dem << " ";
			}
		}
		cout << endl;
	}
}
