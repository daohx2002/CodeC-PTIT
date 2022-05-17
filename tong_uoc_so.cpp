#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
    long long sum = 0;
	while (t--){
		long long n,i=2;
		cin >> n;
		int m=n;
		while (n%2==0){
            sum += 2;
			n/=2;
		}
		for(int i=3; i<=m;i++){
			while (n%i==0){
				sum += i;
				n/=i;
			}
		}
	}
    cout <<sum <<endl;
}

