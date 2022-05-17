#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int dem=0;
        for(int i = 0; i < n; i++){
            if(x == a[i]){
                cout << "1";
                dem++;
                break;
            }
        }
        if(dem == 0){
            cout << "-1";
        }
        cout << endl;
    }
}