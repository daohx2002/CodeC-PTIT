#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    // cin.ignore();
    while(test--){
        int n;
        cin >> n;
        string s;
        cin.ignore();
        getline(cin, s);
        int a[10]={};
        for(int i=0; i<s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                // s[i] = s[i] - '0';
                a[s[i] - '0']++;
            }
        }
        for(int i=0; i<10; i++){
            if(a[i] > 0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}