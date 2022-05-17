#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, dem=0;
        cin >> n;
        int a[n];
        for(int i=0; i<n ;i++){
            cin >> a[i];
        }
        int k = n-1, l=0;
        sort(a, a+n);
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                cout << a[k] << " ";
                k--;
            }
            else{
                cout << a[l] << " ";
                l++;
            }
        }
        cout << endl;
    }
}