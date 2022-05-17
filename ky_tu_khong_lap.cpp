#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        char a[100000], b[100000]={};
        int k=0, m=0;
        for(int i = 0; i <s.size(); i++){
            b[s[i] - 'A']++;
            // cout << s[i] - 'A';
        }
        for(int i = 0; i < s.size(); i++){
            if(b[s[i] - 'A'] == 1){
                // a[m] = i + 65;
                cout << s[i];
                b[s[i] - 'A']= 0;
            }
        }
        cout << endl;
    }
}