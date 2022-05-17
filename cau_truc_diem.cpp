#include<bits/stdc++.h>
using namespace std;
struct diem{
    int x, y;
}p;
void nhap(diem &p){
    cin >> p.x >> p.y;
}
struct diem tong(diem &p, diem &q){
    double sum = (p.x - q.x)*(p.x - q.x) + (p.y - q.y)*(p.y - q.y)
    double sim = sqrt(sum);
    // return sim;
}
int main(){
    struct diem A, B;
    int test;
    cin >> test;
    while(test--){
        nhap(A);
        nhap(B);
        cout << fixed << setprecision(4) << tong(A, B) << endl;
    }
}