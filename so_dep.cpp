#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    // scanf("\n");
    while(test--){
        scanf("\n");
        char s[501];
        cin.getline(s, 501);
        int k = strlen(s);
        int dem =0;
        for(int i=0; i<k; i++){
            if((s[i]-48 == s[k-i-1]-48) && (s[i] - 48)%2==0){
                dem++;
            }
        }
        if(dem == k){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}