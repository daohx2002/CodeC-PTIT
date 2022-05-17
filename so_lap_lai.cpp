#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long a, x, y;
        cin >> a >> x >> y;
        long long k = __gcd(x, y);
        while(k--){
            cout << a;
        }
        cout << endl;
    }
}   