#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct mathang{
    string ten,loai;
    int ma;
    float mua,ban,loi;
};

struct mathang ds[1000];


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t; i++){
        ds[i].ma=i+1;
        scanf("\n");
        getline(cin,ds[i].ten);
        scanf("\n");
        getline(cin,ds[i].loai);
        cin >> ds[i].mua>>ds[i].ban;
        ds[i].loi= ds[i].ban - ds[i].mua;
    }
    for (int i=0; i<t; i++){
        for (int j=i+1; j<t;j++){
            if(ds[i].loi < ds[j].loi) {
                struct mathang tmp=ds[i];
                ds[i]=ds[j];
                ds[j]=tmp;
            }
        }
    }
    for (int i=0; i<t; i++){
        cout << ds[i].ma<< " " << ds[i].ten<< " "<< ds[i].loai;
        cout << " " << fixed << setprecision(2) << ds[i].loi << endl;
    }
}
