#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int k;
        cin >> k;
        long long a[100] = {1, 1};
        for(int i=2; i<k; i++){
            a[i] = a[i-1] + a[i-2];
        }
        cout << a[k-1] << endl;
    }
}