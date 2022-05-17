#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i ==0) return 0;
    }
    return 1;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, dem=0;
        cin >> n;
        for(int i=2; i<=n/2; i++){
            if(check(i) == 1 && check(n-i) == 1){
                cout << i << " " << n-i;
                dem++;
                break;
            }
        }
        if(dem == 0) cout << "-1";
        cout << endl;
    }
}