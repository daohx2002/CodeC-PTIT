#include <bits/stdc++.h> 
using namespace std; 

int main() { 
	int t; 
	cin>>t; 
	while(t--) { 
		int n; 
		cin>>n; 
		int C[n]; 
		for (int i=0; i<n; i++) cin>>C[i]; 
		int count=0; 
		int left=0,right=n-1; 
		while(left<=right) { 
			if (C[left]==C[right]) { 
				left++; 
				right--; 
			} 
			else if (C[left]<C[right]) { 
				left++; 
				C[left]+=C[left-1]; 
				count++; 
			} 
			else { 
				right--; 
				C[right]+=C[right+1]; 
				count++; 
			} 
		} 
		cout<<count<<endl; 
	} 
}