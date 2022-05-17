#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        int k=0;
        long long a[100000]={0};
        for(int i=0; i < s.size(); i++){
            int tmp =0, m;
            if(s[i] >= '0' && s[i] <= '9'){
                k++;
                a[k] += tmp*10 + (s[i] - '0');
                int p = i+1;
                while(s[p] >= '0' && s[p] <= '9'){
                    a[k] = a[k]*10 + (s[p] - '0');
                    p++;
                }
                i =p;
            }
        }
        long long tong =0;
        for(int i=1; i<=k; i++){
            tong += a[i];
        }
        cout << tong << endl;
    }
}