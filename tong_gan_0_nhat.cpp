#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // sort(a, a+n);
        // long long min = abs(a[0]+a[1]), c;
        // for(int i = 0; i < n-1; i++){
        //     if(abs(a[i] + a[i+1]) <= min){
        //         min = abs(a[i] + a[i+1]);
        //         c = a[i] + a[i+1];
        //     }
        // }
        long long min = abs(a[0] + a[1]), c;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(abs(a[i] + a[j]) < min){
                    min = abs(a[i] + a[j]);
                    c = a[i] + a[j];
                }
            }
        }
        cout << c << endl;
    }
}