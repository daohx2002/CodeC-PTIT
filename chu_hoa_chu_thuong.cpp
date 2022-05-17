#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		char s;
		cin >> s;
		if(s >= 'A' && s <= 'Z'){
			s = s +32;
			cout << s << endl;
		}
		else{
			s = s - 32;
			cout << s << endl;
		}
	}
}
