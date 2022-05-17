#include<bits/stdc++.h>
using namespace std;
int check(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    long long a, b;
    cin >> a >> b;
    if(a > b){
        long long tmp = a; 
        a = b; 
        b = tmp;
    }
    for(long long i=a; i<=b; i++){
        if(check(i) == 1){
            cout << i << " ";
        }
    }
}