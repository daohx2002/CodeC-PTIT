#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k, dem=1;
        int a[10000];
        cin >> n >> k;
        for(int i=2; i<=n; i++){
            while(n % i == 0){
                a[dem] = i;
                dem++;
                n /= i;
            }
        }
        if(k < dem){
            cout << a[k] << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}