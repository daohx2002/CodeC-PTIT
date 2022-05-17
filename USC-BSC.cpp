#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--){
		long long a, b;
		cin >> a >> b;
		long long gcd = __gcd(a,b);
		long long lcm = a*b / gcd;
		cout << lcm <<" "<< gcd << endl;
	}
}
