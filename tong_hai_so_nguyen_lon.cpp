#include <bits/stdc++.h> 
using namespace std; 

string add(string a,string b){ 
	string res; 
	int nho=0; 
	while(a.size()<b.size()) a="0"+a; 
	while(a.size()>b.size()) b="0"+b; 
	bool ok=false; 
	if(a<b) swap(a,b); 
	int len=a.size()-1; 
	for(int i=len;i>=0;i--){ 
		int so=(a[i]-'0') + (b[i]-'0')+nho; 
		if(so>9){ 
			res=char((so%10)+'0')+res; 
			nho=1; 
		} 
		else { 
			res=char(so+'0')+res; 
			nho=0; 
		} 
	}
	if (nho==1) res=char(nho+'0') + res;
	return res; 
} 

int main (){ 
	int t; 
	cin>>t; 
	while(t--){ 
		string a,b; 
		cin>>a>>b; 
		cout<<add(a,b); 
		cout<<endl; 
	} 
}