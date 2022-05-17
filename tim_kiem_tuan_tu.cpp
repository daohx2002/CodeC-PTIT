#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k, dem=0;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i] == k){
                cout << i+1;
                dem++;
                break;
            }
        }
        if(dem==0){
            cout << "-1";
        }
        cout << endl;
    }
}