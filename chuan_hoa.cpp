#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	scanf("\n");
	while(t--)
	{
		string a;
		getline(cin,a);
		string tmp="";
		int t = 0;
		int b = 0;
		if(a.substr(0,3)=="+84")
		{
			tmp+="0";
			b=3;
		}
		if(a.substr(0,2)=="84")
		{
			tmp+="0";
			b=2;
		}
		for(int i = b;i < a.size();i++)
		{
			if(a[i]>=48&&a[i]<=57)	tmp+=a[i];
		}
		
		cout << tmp << endl;
	}
}