#include<bits/stdc++.h>
using namespace std;
const long r = pow(10,9) + 7;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        long long a[100000] = {0,1};
        for(int i = 2; i <= n; i++){
            a[i] = (a[i-1] % r) + (a[i-2] % r);
        }
        cout << a[n] % r << endl;
    }
}