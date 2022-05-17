#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k=0, dem=0;
        cin >> n;
        long long a[n];
        long long b[100001]={0};
        for(long long i=0; i<n-1; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        sort(a, a+n);
        for(long long i=a[0]; i<=a[n-2]; i++){
            if(b[i] == 0){
                cout << i;
                break;
            }
        }
        cout <<  endl;
    }
}
