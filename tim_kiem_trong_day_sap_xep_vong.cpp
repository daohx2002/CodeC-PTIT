#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, x;
        cin >> n >> x;
        long long a[n];
        for(long long i=0; i<n; i++){
            cin >> a[i];
        }
        for(long long i=0; i<n; i++){
            if(x == a[i]){
                cout << i+1; 
            }
        }
        cout << endl;
    }
}