#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z,n;
        cin >> x >> y >> z >> n;
        long long a= (long long)x*y/(__gcd(x,y));
        a= a*z/(__gcd(a,(long long)z));
        if(a>(pow(10,n)-1)){
            cout << -1 << endl;
        }
        else{
            long long j= pow(10,n-1)-1;
            long long i= j/a;
            cout << a*(i+1) << endl;
        }
    }
}
