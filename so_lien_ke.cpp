#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int a[100];
        int dem=0, k=0;
        while(n){
            a[dem] = n % 10;
            dem++; 
            n /= 10;
        }
        for(int i=0; i<dem-1; i++){
            if((a[i] == a[i+1] + 1) || a[i] == a[i+1] - 1) k++;
            else{
                k=0;
                cout << "NO" << endl;
                break;
            }
        }
        if(k != 0) cout <<"YES" << endl;
    }
}