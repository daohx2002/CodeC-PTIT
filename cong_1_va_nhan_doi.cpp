#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; 
    cin >> test;
    while(test--){
        int n; 
        cin >> n;
        int a[n]; 
        for(int i=0;i<n;i++){
            cin >> a[i];
        } 
        int dem=0, m=0;
        for(int i=0;i<n;i++){
            int k=0; int x=a[i]; 
            while(x>0){ 
                if(x%2==0){
                    x/=2; 
                    k++; 
                } 
                if(x%2==1){
                    x-=1; 
                    dem++; 
                } 
            }
            m=max(m, k);
        }
        cout<<m+dem<<endl;
    } 
}