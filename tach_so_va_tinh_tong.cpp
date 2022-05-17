#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        long long tong=0, b[100000], k=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                int m = s[i]-'0';
                tong += m;
            }
            else{
                b[k] = s[i] - 'A';
                k++;
            }
        }
        sort(b, b+k);
        for(int i=0; i<k; i++){
            s[i] = b[i]+'A';
            cout << s[i];
        }
        cout << tong << endl;
    }
}