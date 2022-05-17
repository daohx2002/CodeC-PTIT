#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
    cin.ignore();
	while(test--){
		string a;
		getline(cin, a);
		int l=a.size();
		int i;
		int kt=0;
		if(a[5]<a[6] && a[6]<a[7] && a[7]<a[9] && a[9]<a[10]){
			kt=1;
		}
		else if(a[5]==a[6] && a[6]==a[7] && a[7]==a[9] && a[9]==a[10]){
			kt=1;
		}
		else if(a[5]==a[6] && a[6]==a[7]  && a[9]==a[10]){
			kt=1;
		}
		else if( (a[5]==54 || a[5]==56) && (a[6]==54 || a[6]==56) && (a[7]==54 || a[7]==56) && (a[9]==54 || a[9]==56) && (a[10]==54 || a[10]==56)){
		    kt=1;
		}
		else {
			kt=0;
		}
		if(kt!=1) cout << "NO" << endl;
		else cout << "YES" << endl;	
		}
	}
