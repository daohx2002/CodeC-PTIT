#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        // cin.ignore();
        // scanf("%c\n", s);
        int n, a[10000]={}, k=0;
        cin >> n;
        cin.ignore();
        for(int i = 0; i < s.size(); i++){
            k = s[i] - 'a';
            a[k]++;
        }
        int dem=0;
        for(int i = 0; i <= 25; i++){
            if(a[i] == 0){
                dem++;
            }
        }
        if(dem <= n) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
