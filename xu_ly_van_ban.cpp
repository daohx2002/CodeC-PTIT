#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,token;
    getline(cin,s,'_');
    transform(s.begin(),s.end(),s.begin(),:: tolower);
    stringstream ss(s);
    int kt=1;
    while(ss >> token){
        if(kt==1){
            token[0]=toupper(token[0]);
            int n= token.length();
            if(token[n-1]=='.'||token[n-1]=='?'||token[n-1]=='!'){
                for(int i=0;i<n-1;i++){
                    cout << token[i];
                }
                cout << endl;
                kt=1;
            }
            else{
                cout << token << " ";
                kt=0;
            }
        }
        else{
            int n= token.length();
            if(token[n-1]=='.'||token[n-1]=='?'||token[n-1]=='!'){
                for(int i=0;i<n-1;i++){
                    cout << token[i];
                }
                cout << endl;
                kt=1;
            }
            else{
                cout << token << " ";
                kt=0;
            }
        }
    }
}