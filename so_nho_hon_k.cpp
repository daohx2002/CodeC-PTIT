#include<bits/stdc++.h>
using namespace std;
int minSwap(long long *a, int n, int k) {
    long long c = 0;
    for (long long i = 0; i < n; ++i)
        if (a[i] <= k)
            ++c;
    long long b = 0;
    for (long long i = 0; i < c; ++i)
        if (a[i] > k)
            ++b;
    long long ans = b;
    for (long long i = 0, j = c; j < n; ++i, ++j) {
        if (a[i] > k)
            --b;
        if (a[j] > k)
            ++b;
        ans = min(ans, b);
    }
    return ans;
}
int main() {
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(long long i = 0; i < n; ++i){
            cin >> a[i];
        }
        cout << minSwap(a,n,k) << endl;
    }
}
     