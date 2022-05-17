#include<bits/stdc++.h>
using namespace std;
float QuyDoi(int t) {
    if (t==3 || t==4) return 2.5;
    else if(t==5 || t==6) return 3.0;
    else if(t>=7 && t<=9) return 3.5;
    else if(t>=10 && t<=12) return 4.0;
    else if(t>=13 && t<=15) return 4.5;
    else if(t>=16 && t<=19) return 5.0;
    else if(t>=20 && t<=22) return 5.5;
    else if (t>=23 && t<=26) return 6.0;
    else if (t>=27 && t<=29) return 6.5;
    else if (t>=30 && t<=32) return 7.0;
    else if (t>=33 && t<=34) return 7.5;
    else if (t>=35 && t<=36) return 8.0;
    else if (t>=37 && t<=38) return 8.5;
    else return 9.0;
}

void xuat(float tong){
    int n = tong;
    float m = tong;
    float a = m-n;
    if(a>=0.25 && a<0.5) tong=n*1.0+0.5;
    else if (a>=0.75) tong = n*1.0+1;
    else if(a <0.25) tong=n*1.0;
    else if (a>0.5 && a<0.75) tong= n*1.0+0.5;
    printf("%.1f\n",tong);
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int r,l;
        float p,w;
        cin >> r >> l >> p >> w;
        float tong= QuyDoi(r) + QuyDoi(l)+p+w;
        xuat(tong/4);
    }
}