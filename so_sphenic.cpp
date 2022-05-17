#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, a[10000], k=0, dem=0;
        cin >> n;
        while(n%2==0){
            if(n % 2 == 0){
                a[k] = 2;
                k++;
                n /= 2;
            }
        }
        for(int i=3; i<=sqrt(n); i+=2){
            while(n % i == 0){
                if(n % i == 0){
                    a[k] = i;
                    k++;
                    n /= i;
                }
            }
        }
        for(int i=0; i<k-1; i++){
            if(a[i] == a[i+1]) dem++;
        }
        if(dem == 0 && k == 2) cout << "1";
        else cout << "0";
        cout << endl;
    }
}