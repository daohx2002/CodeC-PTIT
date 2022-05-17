#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> v(1e5 + 1, 0);
    for (int i = 1; i <= n; ++i) {
        set<int> s;
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> t(s.begin(), s.end());
        for (auto x : t) v[x]++;
    }
    int d = 0;
    for (auto x : v) {
        if (x == n) d++;
    }
    cout << d << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}