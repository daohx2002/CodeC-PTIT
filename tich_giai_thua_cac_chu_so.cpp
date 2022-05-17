#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    string s;
    cin >> n >> s;
    int a[10] = {0};
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '2') a[2]++;
        else if (s[i] == '3') a[3]++;
        else if (s[i] == '4') a[3]++, a[2] += 2;
        else if (s[i] == '5') a[5]++;
        else if (s[i] == '6') a[5]++, a[3]++;
        else if (s[i] == '7') a[7]++;
        else if (s[i] == '8') a[7]++, a[2] += 3;
        else if (s[i] == '9') a[7]++, a[3] += 2, a[2]++;
    }
    for (int i = 9; i >= 2; --i) {
        for (int j = 1; j <= a[i]; ++j)
            cout << i;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) process();
    return 0;
}