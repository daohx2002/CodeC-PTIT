#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        long long tong = 0;
        cin >> n >> k;
        for(long long i=1; i<=n; i++){
            tong += i % k;
        }
        if(tong == k) cout << "1" << endl;
        else cout << "0" << endl;
    }
}