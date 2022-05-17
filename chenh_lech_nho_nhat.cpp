#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        long long min = 1000000000;
        sort(a, a+n);
        for(int i=0; i<n-1; i++){
            if(abs(a[i+1] - a[i]) < min){
                min = a[i+1]-a[i];
            }
        }
        cout << min << endl;
    }
}