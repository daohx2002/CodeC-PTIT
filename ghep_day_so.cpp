#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int k, n;
        cin >> k >> n;
        long long a[k][n], b[k*n];
        int dem=0;
        for(int i=0; i<k; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
                b[dem] = a[i][j];
                dem++;
            }
        }
        for(int i=0; i<dem-1; i++){
            for(int j=i+1; j<dem; j++){
                if(b[i] > b[j]){
                    long long tmp = b[i];
                    b[i] = b[j];
                    b[j] = tmp;
                }
            }
        }
        for(int i=0; i<dem; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
