#include <iostream>
#include<string.h>
using namespace std;

int check(char c){
	if(c>='A' && c<='Z') c+=32;
	if(c=='a' || c=='b' || c=='c') return 2;
	if(c=='d' || c=='e' || c=='f') return 3;
	if(c=='g' || c=='h' || c=='i') return 4;
	if(c=='j' || c=='k' || c=='l') return 5;
	if(c=='n' || c=='m' || c=='o') return 6;
	if(c=='p' || c=='q' || c=='r' || c=='s') return 7;
	if(c=='t' || c=='v' || c=='u') return 8;
	if(c=='x' || c=='y' || c=='z' || c=='w') return 9;
}

int process(string s,int b[]){
	int n=s.length();
	for (int i=0; i<s.length();i++){
		s[i]=check(s[i])+'0';
	}
	for (int i=0; i<n; i++){
		if (s[i]!=s[n-1-i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		scanf("\n");
		getline(cin,s);
		int b[100]={0};
		if(process(s,b)==0) cout << "NO\n";
		else cout << "YES\n";
	}
}
