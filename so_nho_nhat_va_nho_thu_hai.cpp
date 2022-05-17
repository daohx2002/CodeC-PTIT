#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k=0, dem=0;
        cin >> n;
        long long a[n],c[n];
        for(long long i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for(long long i=0; i<n; i++){
            if(a[0] != a[1]){
                cout << a[0] << " " << a[1];
                break;
            }
            else{
                cout << "-1";
                break;
            }
        }
        cout << endl;
    }
}