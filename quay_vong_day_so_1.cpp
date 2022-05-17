#include<bits/stdc++.h>
using namespace std;
void sx1(long long n, long long d, long long a[]){
    for(long long i=d; i<n; i++){
        cout << a[i] << " ";
    }
}
void sx2(long long n, long long d, long long a[]){
    for(long long i=0; i<d; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, d;
        cin >> n >> d;
        long long a[n];
        for(long long i=0; i<n; i++){
            cin >> a[i];
        }
        sx1(n, d, a);
        sx2(n, d, a);
        cout << endl;
    }
}