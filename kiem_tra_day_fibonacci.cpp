#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    long long a[10000] = {0,1};
    long long b[10000];
    while(test--){
        long long n;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        for(int i=0; i<n; i++){
            for(int j=2; j<100; j++){
                a[j] = a[j-1] + a[j-2];
                if(b[i] == 0){
                    cout << "0" << " ";
                    break;
                }
                if(b[i] == a[j]){
                    cout << b[i] << " ";
                    break;
                }
                if(b[i] < a[j]){
                    break;
                }
            }
        }
        cout << endl;
    }
}