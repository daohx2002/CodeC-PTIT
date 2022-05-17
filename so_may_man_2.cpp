// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int test;
//     cin >> test;
//     cin.ignore();
//     while(test--){
//         string s;
//         getline(cin, s);
//         long long tong=0, kt=0;
//         for(int i=0; i<s.size(); i++){
//             tong += s[i] - '0';
//         }
//         if(tong % 9 == 0) cout << "1" << endl;
//         else cout << "0" << endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;

int Rutgon(int a)
{
    int b = 0;
    while (a > 0)
    {
        b += a % 10;
        a /= 10;
    }
    a = b;
    return a;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
        getline(cin, s);
		long long check = 0;
		for(int i = 0; i < s.size(); i++){
			check += (s[i] - '0');
		}
		while (check > 9)
            check = Rutgon(check);
		if(check == 9) cout << 1<< endl;
		else cout << 0 << endl;
	}
	return 0;
}