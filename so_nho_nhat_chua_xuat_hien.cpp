#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[100000]={};
        for(int i=0; i<n; i++){
        	int x;
            cin >> x;
            if(x >= 0){
                a[x]++;
            }
        }
        for(int i=1; i<=10000000; i++){
            if(a[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
}

