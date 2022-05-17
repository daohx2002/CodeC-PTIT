#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[151][151];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        // int k=0;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         b[i][j] = a[k];
        //         k++;
        //     }
        // }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || j==0 || j==n-1){
                   cout << a[i][j] << " "; 
                }
                else cout << "  ";
            }
            cout << endl;
        }
    }
}