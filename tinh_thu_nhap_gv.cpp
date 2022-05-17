#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    long long luong;
    getline(cin, a);
    getline(cin, b);
    cin >> luong;
    int heso = (a[2] - '0') * 10 + a[3] - '0';
    cout << a << " " << b << " " << heso << " ";
    if (a[0] == 'H' && a[1] == 'T'){
        cout << 2000000 << " " << luong * heso + 2000000;
    }
    else if (a[0] == 'H' && a[1] == 'P'){
        cout << 900000 << " " << luong * heso + 900000;
    }
    else{
        cout << 500000 << " " << luong * heso + 500000;
    }
}