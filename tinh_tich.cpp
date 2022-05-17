#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m;
        cin >> n >> m;
        long long a[n], b[m], c[n+m];
        long long dem = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        long long max =0;
        for(int i=0; i<n; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        long long min = 1000000;
        for(int i=0; i<m; i++){
            if(b[i] < min){
                min = b[i];
            }
        }
        cout << max * min << endl;
    }
}