#include<bits/stdc++.h>

using namespace std;
int check(string A[],int n,string k){
    for(int i=0;i<n;i++){
        if(A[i]==k) return 1;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2,token;
        getline(cin,s1);
        getline(cin,s2);
        set <string> data;
        stringstream ss(s1);
        while(ss>>token){
            data.insert(token);
        }
        string ds[100];
        int n=0;
        stringstream ss1(s2);
        while(ss1>>token){
            ds[n++]=token;
        }
        set <string> ::iterator i;
        for(i=data.begin();i!=data.end();i++){
            if(check(ds,n,*i)==-1){
                cout << *i << " ";
            }
        }
        cout << endl;
    }
}