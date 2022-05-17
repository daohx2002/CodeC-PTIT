#include<bits/stdc++.h>
using namespace std;
int n, a[1000], i, ok;
void sinhNP(){
    i = n - 1;
    while(i >= 0 && a[i] == 1){
        a[i] = 0;
        i --;
    }
    if(i >= 0) a[i] = 1;
    else ok = 0;
}
/*
10101         
10110
10111
11000

*/
void in_kq(){
    for(int i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n;
        for(int j = 0; j < n; j++)
            a[j] = 0;
        ok = 1;
        while(ok){
            in_kq();
            sinhNP();
        }
        cout << endl;
    }
    return 0;
}