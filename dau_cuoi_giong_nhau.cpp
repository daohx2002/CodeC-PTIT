#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        int dem = s.size();
        for(int i = 0; i < s.size()-1; i++){
            for(int j = i+1; j < s.size(); j++){
                if(s[i] == s[j]){
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
}