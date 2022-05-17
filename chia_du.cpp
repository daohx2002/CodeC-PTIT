#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a, m;
        cin >> a >> m;
        int k=-1;
        for(int i=0; i<=m-1; i++){
            if(a*i % m == 1){
                k = i;
                // cout << k << endl;
                break;
            }
        }
        cout << k << endl;
    }
}