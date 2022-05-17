#include<iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	
	while(test--){
		int n;
		cin >> n;
		
		int a = n % 100;
		
		if(a==86){
			cout << "1" << endl; 
		}
		else{
			cout << "0" << endl;
		} 
	}
	return 0; 
} 
