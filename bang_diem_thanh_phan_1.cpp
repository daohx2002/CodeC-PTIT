#include<bits/stdc++.h>
using namespace std;
typedef struct Sinhvien{
    string ma,name,lop;
    float x,y,z;
}SV;
int comp(SV a,SV b){
    return a.ma <= b.ma;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SV ds[100];
    for(int i=0;i<n;i++){
        cin >> ds[i].ma;
        cin.ignore();
        getline(cin,ds[i].name);
        cin >> ds[i].lop;
        cin >> ds[i].x >> ds[i].y >> ds[i].z;
    }
    sort(ds,ds+n,comp);
    for(int i=0;i<n;i++){
        cout << i+1 << " ";
        cout << ds[i].ma << " " << ds[i].name << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].x << " ";
        cout << fixed << setprecision(1) << ds[i].y << " ";
        cout << fixed << setprecision(1) << ds[i].z << " ";
        cout << endl;
    }
}