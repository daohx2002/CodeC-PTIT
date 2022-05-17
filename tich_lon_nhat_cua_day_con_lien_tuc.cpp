#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, d=0;
        cin >> n;
        long long a[n+1], b[100000];
        for(long long i=0; i<n; i++)
        {
            cin >> a[i];
            b[d]=a[i];
            d++;
        }
        long long tt=1;
        for(long long i=0; i<n-1; i++)
        {
            tt=a[i];
            for(long long j=i+1; j<n; j++)
            {
                tt=tt*a[j];
                b[d]=tt;
                d++;
            }
        }
        sort(b, b+d);
        cout << b[d-1] << endl;
    }
}
