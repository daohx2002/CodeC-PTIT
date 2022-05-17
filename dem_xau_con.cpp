#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        int n= s.length();
        int dem=0;
        for(int i=0;i<=n-k;i++){
            set <char> ss;
            for(int j=i;j<n;j++){
                ss.insert(s[j]);
                if(ss.size()==k){
                    dem++;
                }
                else if(ss.size()>k){
                    break;
                }
            }
        }
        cout << dem << endl;
    }
}