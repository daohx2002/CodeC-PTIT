#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k=0, dem=0;
        cin >> n;
        int a[100001];
        int b[100001]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        sort(a, a+n);
        for(int i=a[0]; i<=a[n-1]; i++){
            if(b[i] == 0){
                dem++;
            }
        }
        cout << dem << endl;
    }
}
