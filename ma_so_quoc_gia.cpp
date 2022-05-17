#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int a[100], dem=0;
        while(n){
            a[dem] = n % 10;
            dem++;
            n /= 10;
        }
        // cout << dem ;
        for(int i=dem-1; i>=0; i--){
            if(a[i]==0 && a[i-1]==8 && a[i-2]==4){
                i -=2;
            }
            else{
               cout << a[i];
            }
        }
        cout << endl;
    }
}