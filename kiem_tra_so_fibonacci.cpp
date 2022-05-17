#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    long long a[10000] = {0,1};
    while(test--){
        long long n;
        cin >> n;
        for(int i=2; i<1000; i++){
            a[i] = a[i-1] + a[i-2];
            if(n == 0){
                cout << "YES" << endl;
                break;
            }
            if(a[i] == n){
                cout << "YES" << endl;
                break;
            }
            if(a[i] > n){
                cout << "NO" << endl;
                break;
            }
        }
    }
}