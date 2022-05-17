#include<bits/stdc++.h>
using namespace std;
struct ThanhTich{
    int stt;
    string maVDV;
    float diem1, diem2, diem3, tong;
};
int main(){
    struct ThanhTich ds[1000];
    int n;
    cin >> n;
    int k;
    float max = 0;
    for(int i=1; i<=n; i++){
        float tong;
        cin >> ds[i].stt;
        cin.ignore();
        getline(cin, ds[i].maVDV);
        // cin.ignore();
        cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
        ds[i].tong = (ds[i].diem1 + ds[i].diem2 + ds[i].diem3);
        tong = (ds[i].diem1 + ds[i].diem2 + ds[i].diem3);
        if(tong >= max){
            max = tong;
            k = i;
        }
    }
    cout << ds[k].stt << " " << ds[k].maVDV <<" "<< ds[k].diem1<<" "<< ds[k].diem2<<" "<< ds[k].diem3;
    cout << endl;
    for (int i=1; i<n; i++){
        for (int j=i+1; j<=n;j++){
            if(ds[i].tong < ds[j].tong) {
                struct ThanhTich tmp=ds[i];
                ds[i]=ds[j];
                ds[j]=tmp;
            }
        }
    }
    for(int k=1; k<=n; k++){
        cout << ds[k].stt << " " << ds[k].maVDV <<" "<< ds[k].diem1<<" "<< ds[k].diem2<<" "<< ds[k].diem3;
        cout << endl;
    }
}