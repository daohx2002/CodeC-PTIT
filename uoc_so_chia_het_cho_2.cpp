#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int dem=0;
        for(int i=1; i<=sqrt(n); i++){
		    if(n%i==0 ){
                if(i%2==0) dem++;
                if((n/i)%2==0 && i*i!=n) dem++;
	        }
		}
        cout << dem << endl;
    }
}