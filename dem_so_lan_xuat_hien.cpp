#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k, dem=0;
        cin >> n >> k;
        int a[n];
        int b[100000]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        if(b[k] != 0){
            cout << b[k] << endl;
        }
        else cout << "0" << endl;
    }
}