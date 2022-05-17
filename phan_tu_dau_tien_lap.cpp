#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        long long a[n], b[100001]={0},c[100001], k=0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]]++;
            if(b[a[i]] >= 2){
                c[k] = a[i];
                k++;
            }
        }
        if(k!=0){
            cout << c[0] << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}