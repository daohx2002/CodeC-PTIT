#include<bits/stdc++.h>
using namespace std;
string hieu(string a, string b){
    string res;
    while(a.size() > b.size()){
        b = "0" + b;
    }
    while(a.size() < b.size()){
        a = "0" + a;
    }
    int nho=0;
    // bool ok = false;
    if(a < b) swap(a, b);
    int l = a.size();
    for(int i=l-1; i>=0; i--){
        int so = (a[i]-'0') - (b[i]-'0')-nho;
        if(so < 0){
            res = char(so+10+'0') + res;
            nho = 1;
        }
        else{
            res = char(so+'0') + res;
            nho = 0;
        }
    }
    return res;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << hieu(s1, s2) << endl;
    }
}