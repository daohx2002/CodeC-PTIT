#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[1005];
        int B[1005];
        int C[1005];
        int b=0;
        int c=0;
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        sort(A,A+n);
       if(n%2==0){
            for(int i=0;i<n;i++){
                if(i<n/2){
                    B[b++]=A[i];
                }
                else{
                    C[c++]=A[i];
                }
            }
            b=0;
            c=0;
       }
       else{
            for(int i=0;i<n;i++){
                if(i<=n/2){
                    B[b++]=A[i];
                }
                else{
                    C[c++]=A[i];
                }
            }
            b=0;
            c=0;
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout << B[b] << " ";
                b++;
            }
            else{
                cout << C[c] << " ";
                c++;
            }
        }
        cout << endl;
    }
}