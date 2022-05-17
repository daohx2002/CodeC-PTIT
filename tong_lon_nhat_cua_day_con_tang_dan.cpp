#include<bits/stdc++.h>
using namespace std;

void daohuong(){
	int n;
	cin >> n;
	long long a[n];
	long long sum=0,s[n]; 
	for(int i=0;i<n;i++){
		cin >> a[i];
		s[i] = a[i]; 
	}
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[i]>a[j] && (s[i] < s[j] + a[i])){
				s[i] = a[i] + s[j];
			}	
		}	 
	}
	for(int i=0;i<n;i++){
        if(s[i] > sum) sum=s[i];
    }
    cout<< sum <<endl; 
}
int main(){
	int test;
	cin >> test;
	while(test--){
		daohuong(); 
	}
	return 0; 
}