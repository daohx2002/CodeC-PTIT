#include<bits/stdc++.h>
using namespace std;
int check(int n){
	if(n < 2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n, m;
		cin >> n >> m;
		for(int i=n; i<=m;i++){
			if(check(i) == 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//  int N = 10000;
//  int check[N + 1]={};
//  check[0]=1;
//  check[1]=1;
//for (int i = 2; i <= N; i++) {
//    if (check[i] == 0) {
//      for (int j = 2 * i; j <= N; j += i) {
//        check[j] = 1;
//      }
//    }
//  }
//    int t;
//    cin>>t;
//    while (t--)
//    {
//    	int a,b;
//    	cin>>a>>b;
//    	if (a>b)
//    		swap(a,b);
//    	for(int i=a;i<=b;i++)
//    		if (check[i]==0)
//    			cout<<i<<" ";
//    	cout<<endl;
//    	
//    	
//	}
//}

