#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int k=0, l=0, dem=0;
        long long a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n-1; i++){
            if(a[i] != 0){
                if(a[i] == a[i+1]){
                    a[i] *= 2;
                    a[i+1] = 0;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(a[i] != 0){
                cout << a[i] << " ";
            }
            else dem++;
        }
        while(dem--){
            cout << "0" << " ";
        }
        cout << endl;
    }
}
