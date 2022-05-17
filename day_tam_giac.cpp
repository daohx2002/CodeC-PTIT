#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        long long max = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] > max) max = a[i];
        }
        cout << max << endl;
    }
}