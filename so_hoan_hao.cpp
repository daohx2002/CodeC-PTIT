// #include<bits/stdc++.h>
// using namespace std;
// int shh(long long n){
// 	long long s=0,a=n;
// 	if(n==1) return 0;
// 	for(long long i=1;i<=sqrt(n);i++){
// 		if(n%i==0){
//             if(i==1 || i*i==n){
//             s=s+i;
//             }
//             else s=s+i+(n/i);
//         }
//     }    
//     if(a==s) return 1;
//     else return 0;
// }
// int main(){
//     int test;
//     cin >> test;
//     while(test--){
//         long long n, tong =0;
//         cin >> n;
//         if(shh(n) == 1) cout << "1";
//         else cout << "0";
//         cout << endl;
//     }
// }
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int a[8] = {2, 3, 5, 7, 13, 17, 19, 31};
        long long b[8];
        int check = 0;
        for(int i = 0; i < 8; i++){
            int j;
            j = a[i] - 1;
            b[i] = pow(2, j) * (pow(2, a[i]) - 1);
            if(b[i] > n){
                break;
            }
            if(b[i] == n){
                check = 1;
                break;
            }
        }
        if(check == 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}