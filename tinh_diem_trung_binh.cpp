#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    double c[a];
    for(long long i=0;i<a;i++){
        cin>>c[i];
    }
    sort(c, c+a);
    double tong=0;
    double dem=0;
    for(long long i=1;i<a-1;i++){
        if(c[i]!= c[0] && c[i]!= c[a-1]){
            tong=tong+c[i];
            dem++;
        }
    }
    cout<<fixed<<setprecision(2)<<tong/dem<<endl;
}