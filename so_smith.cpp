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
        long long n, sum=0, tong=0, a[100], j=0;
        cin >> n;
        long long c=n, m=n;
        while(c){
            tong += c%10;
            c/=10;
        }
        for(int i=2; i<=n; i++){
            while(n % i == 0){
                if(i>=11){
                    a[j] = i;
                    j++;
                }
                else sum+=i;
                n = n / i;
            }
        }
        if(j>0){
            for(int i=0; i<j; i++){
                while(a[i]){
                    sum += a[i] % 10;
                    a[i] /= 10;
                }
            }
        }
        if(tong == sum && check(m) == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
	return 0;
}
