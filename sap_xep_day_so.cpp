#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test--){
        long long n, m;
        cin >> n >> m;
        long long a[n + 5] = {};
        long long p = -999999999999;
        int c = 1;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            p = max(a[i], p);
        }
        for (int i = 0; i < n; i++){
            if (a[i] < 0)
                cout << a[i] << " ";
        }
        for (int i = 0; i < n; i++){
            if (a[i] == p && c == 1){
                cout << m << " ";
                c = 0;
            }

            if (a[i] >= 0){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}
