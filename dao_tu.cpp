#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        int l=s.size()-1, k=s.size()-1;
        for(int i=l; i>=0; i--){
            if(s[i] == ' '){
                for(int j=i+1; j<=k; j++){
                    cout << s[j];
                }
                cout << " ";
                k = i-1;
            }
            if(i==0){
                for(int j=i; j<=k; j++){
                    cout << s[j];
                }
            }
        }
        cout << endl;     
    }
}