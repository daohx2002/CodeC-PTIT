#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,m=0;
	cin >> test;
	cin.ignore();
	while(test--){
		int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,m=0;
		string s;
		getline(cin, s);
		for(int i=0; i<s.size(); i++){
			if(s[0] == '0' || (s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7'&& s[i] != '8' && s[i] != '9')){
				m++;
			}
			if(s[i] == '0'){
				a++;
			}
			if(s[i] == '1'){
				b++;
			}
			if(s[i] == '2'){
				c++;
			}
			if(s[i] == '3'){
				d++;
			}
			if(s[i] == '4'){
				e++;
			}
			if(s[i] == '5'){
				f++;
			}
			if(s[i] == '6'){
				g++;
			}
			if(s[i] == '7'){
				h++;
			}
			if(s[i] == '8'){
				j++;
			}
			if(s[i] == '9'){
				k++;
			}
//			else m++;
		}
		if(m>0) cout << "INVALID" << endl;
		else{
			if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && j!=0 && k!=0 && m==0){
				cout << "YES" << endl;
			}
			else cout << "NO" << endl;
		}
	}
}
