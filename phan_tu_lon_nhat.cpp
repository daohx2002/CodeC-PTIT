#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        long long a[100001];
        cin >> n;
        for(long long i=0; i<n; i++){
            cin >> a[i];
        }
        int max = 0;
        for(long long i=0; i<n; i++){
            if(a[i] > max) max = a[i];
        }
        cout << max << endl;
    }
}