#include<iostream>

using namespace std;
void xuli(int n ,int m){
    int dem =0;
    int i=m;
    while(i<=n){
        int j=i;
        while(i%m==0){
            dem++;
            i/=m;
        }
        i= j+m;
    }
    cout << dem << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >>m;
        xuli(n ,m);
    }
}
