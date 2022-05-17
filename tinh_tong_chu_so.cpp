#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int tong = 0;
        while(n){
            tong += n % 10;
            n /= 10;
            if(n==0 && tong >= 10){
                n = tong;
                tong = 0;
            }
        }
        cout << tong << endl;
    }
}