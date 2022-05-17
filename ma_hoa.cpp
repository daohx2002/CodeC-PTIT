#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        for(int i=0; i<s.size();){
            int dem=1;
            for(int j=i+1; i<s.size(); j++){
                if(s[i] == s[j]){
                    dem++;
                }
                else break;
            }
            cout << s[i] << dem;
            i += dem;
        }
        cout << endl;
    }
}