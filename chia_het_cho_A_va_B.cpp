#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int m, n, a, b, dem=0, min;
        cin >> m >> n >> a >> b;
        if(a > b) min = b;
        if(b > a) min = a;
        if(m < min){
            m = min;
        }
        for(int i=m; i<=n; i++){
            if(i % a == 0 || i %b == 0){
                dem++;
            }
        }
        cout << dem << endl;
    }
}
