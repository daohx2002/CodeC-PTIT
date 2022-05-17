#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        cin >> n >> k;
        int a[101][101];
        int b[100001];
        int m=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                b[m] = a[i][j];
                m++;
            }
        }
        sort(b, b+m);
        cout << b[k-1] << endl;
    }
}