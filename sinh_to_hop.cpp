#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], i, ok;
void sinhTH(){
    i = k-1;
    while(i>=0 && a[i]==n-k+i+1){
        i--;
    }
    if(i>=0){
        a[i]++;
        for(int j=i+1; j<k; j++){
            a[j] = a[j-1]+1; 
        }
    }
    else ok = 0;
}
void in(){
    for(int j=0; j<k; j++){
        cout << a[j] << " ";
    }
    cout << endl;
}
int main(){
    cin >> n >> k;
    for(int j=0; j<k; j++){
        a[j] = j+1;
    }
    ok=1;
    while(ok==1){ 
        in();
        sinhTH();
    }
}