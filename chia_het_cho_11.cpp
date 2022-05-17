#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        int tong = 0;
        for(int i=0; i<s.size(); i++){
            int k = s[i] - '0';
            if(i % 2 == 0){
                tong += k;
            }
            else tong -= k;
        }
        if(tong % 11 == 0) cout << 1;
        else cout << 0;
        cout << endl;
    }
}