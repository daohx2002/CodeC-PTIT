#include<bits/stdc++.h>
using namespace std;
#define STOP -1
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        int dem=1, chan=0, le=0;
        getline(cin, s);
        for(int i=0; i<s.size(); i++){
            if(i == s.size()-1){
                if((s[i] - '0') % 2 == 0) chan++;
                else le++;
            }
            if(s[i] == ' '){
                dem++;
                if((s[i-1] - '0') % 2==0){
                    chan++;
                }
                else le++;
            }
        }
        if((dem % 2 ==0 && chan > le) || (dem % 2 == 1 && le>chan)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        // cout << chan << " " << le;
    }
}