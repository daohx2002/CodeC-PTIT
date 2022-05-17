#include<bits/stdc++.h>
using namespace std;

int k;
int main() {  
	cin >> k; 
	cin.ignore();
	while(k--) { 
		string xau;
		cin >> xau;
		int i = 2;
		int xoa = 0;
		while (i < xau.length()){
			if (xau[i-2] == '1' && xau[i-1] =='0' && xau[i] == '0'){
				xoa++;
				xau.erase(i-2,3); 
				i = 2;		
			}
			else i++;
		}
		cout << xoa * 3 << endl;
	} 	
}
