#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b){
    if (!a)
        return b;
    return gcd(b % a, a);
}
ll reduceB(ll a, string b){  
    ll mod = 0;
    for (int i = 0; i < b.size(); i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod; 
}
ll gcdLarge(ll a, string b){
    ll num = reduceB(a, b);
    return gcd(a, num);
}
int main(){
    int test;
    cin >> test;
    while (test--){
        int a;
        string b;
        cin>>a;
        cin.ignore();
        getline(cin,b);
        if (a==0)
            cout<<b<<endl;
        else  
            cout<<gcdLarge(a,b)<<endl;
    }
}