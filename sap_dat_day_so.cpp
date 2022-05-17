#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k, dem=0;
        cin >> n;
        long long a[n], b[100001];
        for(long long i=0; i<100001; i++){
            b[i] = -1;
        }
        for(long long i = 0; i < n; i++){
            cin >> k;
            if(k < n && k >= 0){
                b[k] = k;
            }
        }
        for(long long i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
