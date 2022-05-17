#include<bits/stdc++.h>
using namespace std;
void in(int n) 
{ 
    int a[1000]; 
    int i = 0, d=8; 
    while (n > 0) { 
        a[i] = n % 2; 
        n = n / 2; 
        i++; 
    }  
    while(d--){
        if(d==i-1) break; 
        else cout <<"0";
    }
    for (int j = i - 1; j >= 0; j--) 
        cout << a[j]; 
} 
int chuyenNP(long n)
{
    int m = 0, temp = 0, k;
    while (n != 0)
    {
        k = n % 10;
        n = n / 10;
        m = m + k*pow(2,temp);
        temp++;
    }
    return m;
}
int main() 
{ 
    long a, b;
    cin >> a >> b;
    long tong = chuyenNP(a) + chuyenNP(b);
    if(tong > 255){
        cout << "Tran bo nho";
    }
    else{
        in(tong); 
    }
    return 0; 
} 