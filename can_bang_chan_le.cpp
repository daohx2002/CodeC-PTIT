#include<bits/stdc++.h>
using namespace std;
int kt(long long a){
	long long l=0,c=0;
	while(a>0){
		int d=a%10;
		if(d%2==1) l++;
		if(d%2==0) c++;
		a=a/10;
	}
	if(l==c) return 1;
	return 0;
}
int main(){
    int n;
    cin >> n;
    int k=0;
    long long a=1, b=1;
    for(int i=1; i<=n; i++){
        a = a * 10;
        b = a / 10;
    }
    long long dem = 0;
    for(long long i=b; i<=a; i++){
        if(kt(i) == 1){
            dem++;
            cout << i << " ";
        }
        if(dem == 10){
            cout << endl;
            dem = 0;
        }
    }
}