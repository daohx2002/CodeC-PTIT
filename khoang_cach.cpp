#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		double a, b, c, d;
		cin >> a >> b >> c >> d;
		double m = a - c;
		double n = b - d;
		cout << fixed << setprecision(4) << sqrt(m*m+n*n) << endl;
	}
}