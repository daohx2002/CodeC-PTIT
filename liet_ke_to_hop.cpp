#include<bits/stdc++.h>
using namespace std;
int n, a[1000], i, ok, k;
void sinh_TH(){
    int i = k-1;
    while(i >= 0 && a[i] == n-k+i+1){
        i--;
    }
    if(i >= 0){
        a[i] ++;
        for(int j=i+1; j<k; j++){
            a[j] = a[j-1] + 1;
        }
    }
    else ok=0;
}
void in_kq(){
    for(int i=0; i<k; i++){
        cout << a[i];
    }
    cout << " ";
}
int main(){
    int test;
    cin >> test;
    while(test--){
        // int n, k, a[1000];
        cin >> n >> k;
        for(int i=0; i<k; i++){
            a[i] = i +1;
        }
       ok=1;
        while(ok){
            in_kq();
            sinh_TH();
        }
        cout << endl;
    }
}