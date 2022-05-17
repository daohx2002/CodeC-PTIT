#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    if(n < 2) return 0;
    for(long long i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int tang(long long n){
    int max = n % 10;
    n /= 10;
    while(n){
        if(n % 10 >= max){
            return 0;
        }
        max = n % 10;
        n /= 10;
    }
    return 1;
}
int giam(long long n){
    int min = n % 10;
    n /= 10;
    while(n){
        if(n % 10 <= min){
            return 0;
        }
        min = n % 10;
        n /= 10;
    }
    return 1;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        long long a=1, b=1,dem =0;
        for(int i = 1; i <= n; i++){
            a *= 10;
            b = a/10;
        }
        for(long long i = b; i < a; i++){
            if(tang(i) == 1 || giam(i) == 1){
                if(check(i) == 1) dem++;
            }
        }
        cout << dem << endl;
    }
}