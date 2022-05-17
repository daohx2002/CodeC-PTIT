#include <bits/stdc++.h>
using namespace std;
int a[10000] = {};
int main(){
    int n, m;
    cin >> n >> m;
    int k;
    for (int i = 0; i < n; i++){
        cin >> k;
        a[k]++;
    }
    int no = -1;
    int ln1 = 0, ln2 = 0;
    for (int i = 1; i <= m; i++)
    {
        if (a[i] > ln1)
            ln1 = a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        if (a[i] > ln2 && a[i] < ln1)
        {
            ln2 = a[i];
            no = i;
        }
    }
    if (no == -1)
        cout << "NONE";
    else
        cout << no;
}