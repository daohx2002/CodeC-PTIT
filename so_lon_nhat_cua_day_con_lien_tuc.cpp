// #include<bits/stdc++.h>
// using namespace std;
// #define MAX(a,b)  (a > b)? a : b
// int main(){
//     int test;
//     cin >>  test;
//     while(test--){
//         long long n, k;
//         cin >> n >> k;
//         long long a[n];
//         for(long long i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         long long m;
//         for(long long i = 0; i < n; i++){
//             if(i <= n-k){
//                 sort(a+i, a+i+k);
//                 cout << a[i+k-1] << " ";
//             }
//         }
//         cout << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
        if (dq.front() < i - k + 1)
            dq.pop_front();
        if (i + 1 >= k)
            cout << a[dq.front()] << " ";
    }
    cout << endl;

}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}