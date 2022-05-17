#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, dem=0;
        cin >> n;
        for(int i = 1; i < n; i++){
            if(__gcd(i, n) == 1){
                dem++;
            }
        }
        if(check(dem) == 1) cout << "1";
        else cout << "0";
        cout << endl; 
    }
}