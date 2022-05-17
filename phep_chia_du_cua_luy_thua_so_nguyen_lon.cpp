#include<bits/stdc++.h>
using namespace std;


long long gt(long long sum,int n,int k){
    long long result =1;
    while (n){
        if(n%2!=0){
        	result*=sum;
        	result%=k;
		}
		sum*=sum;
		sum%=k;
		n/=2;
    }
    return result;
}
void process(){
    string s;
    long long k,n;
    cin >> s;
    cin >> n>>k;
    long long sum=0; 
    for (int i=0; i<s.length(); i++){
        sum=(sum*10+ (s[i]-'0'))%k;
    }
    cout << gt(sum,n,k) << endl;
}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        process();
    }
}