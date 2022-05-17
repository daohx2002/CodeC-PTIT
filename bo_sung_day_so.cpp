#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+5];
    int b[100000] = {0};
    int max = -1 , k=0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
        if(a[i] > max) max = a[i];
    }
    for(int i = 1; i <= max; i++){
        if(b[i] == 0 && i<max){
            cout << i << " " << endl;
            k++;
        }
    }
    if(k==0) cout << "Excellent!";
}