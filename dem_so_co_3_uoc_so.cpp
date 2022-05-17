#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int test;
    cin >> test;
    while(test--){
        int dem = 0;
        long long n;
        cin >> n;
        for(int i=2; i<=sqrt(n); i++){
            if(check(i) == 1){
                dem++;
            }
        }
        cout << dem << endl;
    }
}