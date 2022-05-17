#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k, dem=0;
        cin >> n;
        int a[n];
        int b[100000]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        for(int i=0; i<n; i++){
            if(b[a[i]] >= 2){
                dem += b[a[i]];
                b[a[i]] = 0;
            }
        }
        cout << dem << endl;
    }
}