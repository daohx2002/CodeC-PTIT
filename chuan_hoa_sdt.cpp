#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        scanf("\n");
        getline(cin, s);
        for (int i=0; i<s.length(); i++){
            if (i==0 && s[0]!='0'){
                if(s[0]=='+') i+=3;
                else if(s[0]=='8') i+=2;
                cout << '0';
            }
            if(s[i]>='0' && s[i]<='9') cout << s[i];
        }
        cout << endl;
    }
}
