#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[1005];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        int maxi=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(A[j]>A[i]){
                    if(A[j]-A[i]>maxi){
                        maxi=A[j]-A[i];
                    }
                }
            }
        }
        cout << maxi << endl;
    }
}
