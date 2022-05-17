#include<bits/stdc++.h>
using namespace std;
void tong(int l, int r, int a[]){
    int tong =0;
    for(int i=l-1; i<r; i++){
        tong += a[i];
    }
    cout << tong << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, q;
        cin >> n >> q;
        int a[n], b[q][2];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<q; i++){
            int l, r;
            cin >> l >> r;
            tong(l, r, a);
        }
        cout << endl;
    }
}