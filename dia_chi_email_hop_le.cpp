#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int i = 0;
    string s1 = "", s2 = "";
    for(; i < s.size(); ++i){
        if(isblank(s[i])) return 0;
        if(s[i] == '@') break;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        s1 += s[i];
        if(s1.size() > 64) return 0;
    }
    if(!s1.size()) return 0;
    ++i;
    int checkDots = 0;
    for(; i < s.size(); ++i)
    {
        if(isblank(s[i])) return 0;
        if(!isalnum(s[i]) && s[i] != '.' && s[i] != '_') return 0;
        if(s[i] == '.') checkDots++;
        s2 += s[i];
        if(s2.size() > 254) return 0;
    }
    if(checkDots == 1 && s2.size() && s2[s2.size() - 1] == '.') return 0;
    return s2.size() && checkDots;
}
 
int main(){
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin, s);
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}