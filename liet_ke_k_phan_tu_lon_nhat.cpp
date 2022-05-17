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
        sort(a, a+n);
        int m = n-1;
        while(k--){
            cout << a[m] << " ";
            m--;
        }
        cout << endl;
    }
}