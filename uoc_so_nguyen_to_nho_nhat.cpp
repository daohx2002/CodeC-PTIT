#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        for(int i=1; i<=n; i++){
            if(i == 1){
                cout << "1" << " ";
            }
            if(i % 2 == 0){
                cout << 2 << " ";
            }
            else{
                for(int j=3; j<=i; j+=2){
                    if(i % j == 0){
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}