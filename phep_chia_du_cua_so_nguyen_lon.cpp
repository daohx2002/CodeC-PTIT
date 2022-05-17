#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string n;
        long long m;
        cin >> n >> m;
        int a[10000];
        long long k=0;
        for(int i=0; i<n.size(); i++){
            a[i] = n[i] - '0';
        }
        for(int i=0; i<n.size(); i++){
            k = (k*10 + a[i]) % m;
        }
        cout << k << endl;
    }
}