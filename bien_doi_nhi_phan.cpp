#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m;
        cin >> n >> m;
        int a[101][101], b[101][101];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == 1){
                    for(int k=0; k<m; k++){
                        b[i][k] = 1;
                    }
                    for(int l=0; l<n; l++){
                        b[l][j] = 1;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}