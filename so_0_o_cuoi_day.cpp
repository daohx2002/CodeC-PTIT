#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, dem=0;
        cin >> n;
        long long k = n;
        long long a[n], b[n];
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0){
                // b[k] = a[i];
                // k++;
                cout << a[i] << " ";
            }
            else{
                dem++;
            }
        }
        // for(long long i=0; i<k; i++){
        //     sort(b, b+k);
        // }
        // for(long long i = 0; i < k; i++){
        //     cout << b[i] << " ";
        // }
        while(dem--){
            cout << "0" << " ";
        }
        cout << endl;
    }
}
