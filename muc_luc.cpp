#include<bits/stdc++.h>
using namespace std;
int check_page(string s){
    if(s.size() < 6) return -1;
    string tmp = s.substr(0, 4);
    if(tmp != "Page") return -1;
    int cnt = 0;
    for(int i = 5; i < s.size(); ++i) cnt = cnt * 10 + (s[i] - '0');
    return cnt;
}
int check_level(string s){
    if(s.size() < 6) return -1;
    string tmp = s.substr(0, 5);
    if(tmp == "Level") return s[5] - '0';
    return -1;
}
int main(){
    ifstream fin("VANBAN.txt");
    ofstream fout("MUCLUC.txt");
    string s;
    vector <string> mucluc;
    int i;
    while(getline(fin,s)){
        if(!s.size()) continue;
        int check = check_page(s);
        if(check!=-1) i= check;
        check= check_level(s);
        if(check!=-1){
            string tmp="";
            while(check--) tmp+=">";
            string sub = s.substr(8,s.size()-8);
            tmp+= (sub + "--- " + to_string(i));
            mucluc.push_back(tmp);
        }
    }
    for(int i=0;i<mucluc.size();i++){
        fout << mucluc[i] << endl;
    }
}
