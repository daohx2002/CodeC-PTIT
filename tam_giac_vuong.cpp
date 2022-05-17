#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,k; 
    long long a[5000];
    cin >> test;
    while(test--){
        int check=0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }      
        sort(a, a+n); 
        for(int i=0;i<n;++i){
	        for(int j=i+1;j<n;++j){
		        long long h=a[i]*a[i]+a[j]*a[j];
		        long long p=(long long)sqrt(a[i]*a[i]+a[j]*a[j]);
			    if(p*p==h){       
			        for(k=j+1;k<n;++k) 
			        if(h==a[k]*a[k]){
			            ++check;
			            if(check==1) cout << "YES" << endl;
                    }
	        	} 
	        }          
	    } 
	    if(check==0) cout << "NO" << endl;
	}
}
