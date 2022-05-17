#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
    string ma1="0000";
    string ma2="000";
    int ma;
    string name,sex,date,address,code, date_contract;
};
int dem=0;
void nhap(struct NhanVien &a){
    if(dem==0){
        cin.ignore();
    }
    a.ma=dem+1;
    getline(cin,a.name);
    cin >> a.sex >> a.date;
    cin.ignore();
    getline(cin,a.address);
    cin >> a.code >> a.date_contract;
    cin.ignore();
    dem++;
}
bool cmp(struct NhanVien a, struct NhanVien b){
    stringstream ss1(a.date);
    stringstream ss2(b.date);
    string token,A[5],B[5];
    int i=1,j=1;
    while(getline(ss1,token,'/')){
        A[i++]=token;
    }
    while(getline(ss2,token,'/')){
        B[j++]=token;
    }
    if(A[3]>B[3]){
        return false;
    }
    else if(A[3]<B[3]){
        return true;
    }
    else{
        if(A[1]>B[1]){
            return false;
        }
        else if(A[1]<B[1]){
            return true;
        }
        else{
            if(A[2]>B[2]){
                return false;
            }
            else if(A[2]<B[2]){
                return true;
            }
        }
    }
}
void sapxep(struct NhanVien ds[],int n){
    sort(ds,ds+n,cmp);
}
void inds(struct NhanVien ds[],int n){
    for(int i=0;i<n;i++){
        if(ds[i].ma<10){
            cout << ds[i].ma1 << ds[i].ma << " ";
        }
        else{
            cout << ds[i].ma2 << ds[i].ma << " ";
        }
        cout << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " ";
        cout << ds[i].address << " " << ds[i].code << " " << ds[i].date_contract << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}