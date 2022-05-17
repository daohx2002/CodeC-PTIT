#include <bits/stdc++.h>
using namespace std;

int a[1005], b[1005], n;



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    cin >> n;
	    for (int i = 1; i <= n; i++)
	        cin >> a[i];
	    int res = 1;
	    for (int i = 1; i <= n; i++) {
	        b[i] = 1;
	        for (int j = 1; j < i; j++) {
	            if (a[j] < a[i])
	                b[i] = max(b[i], b[j] + 1);
	        }
	        res = max(res, b[i]);
	    }
	    cout<<res<<endl;
    }
}
