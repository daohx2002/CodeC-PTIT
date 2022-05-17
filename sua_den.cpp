#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, b, m;
    cin >> n >> k >> b;
    int dem[100000]={0};
    for(int i=0; i<b; i++){
        cin >> m;
        dem[m] ++;
    }
    int max = 999999, sum=0;
    for(int i=1; i<=n-k+1; i++){
        for(int j=i; j<=i+k-1; j++){
            sum += dem[j];
        }
        if(sum < max) max = sum;
        sum = 0;
    }
    cout << max << endl;
}