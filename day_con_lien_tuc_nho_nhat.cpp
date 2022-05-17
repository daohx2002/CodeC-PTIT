#include<bits/stdc++.h>
using namespace std;
int TimSo(int a[], int n, int x){
    int sum = 0, min = n + 1;
    int k = 0, l = 0;
    while (l < n) {
        while (sum <= x && l < n)
            sum += a[l++];
        while (sum > x && k < n) {
            if (l - k < min)
                min = l - k;
            sum -= a[k++];
        }
    }
    return min;
}
int main(){
    int test;
    cin >> test;
    while (test--){
        int a[10000001];
        int n,m;
        cin >> n >> m;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int res2 = TimSo(a, n, m);
             (res2 == n + 1) ? cout << "-1\n"
                     : cout << res2 << endl;
    }
}
