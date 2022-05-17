#include<bits/stdc++.h> 
using namespace std; 

string s; 
int t,i,temp,temp2; 

void process(){ 
	int r=0; 
	cin>>s; 
	for(i=0;i<s.size();i++){ 
		s[i]-='0';
		r=(2*r+s[i])%5;
	} 
	if(r==0) 
	cout<<"Yes"; 
	else cout<<"No"; 
	cout<<endl;
} 
int main(){ 
	cin>>t; 
	while(t--){ 
		process(); 
	} 
	return 0; 
}