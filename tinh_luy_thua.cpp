#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long x, y, z, k=1;
        cin >> x >> y >> z;
        for(int i=1; i<=y; i++){
            k = (k * (x%z)) % z;
        }
        cout << k << endl;
    }
}