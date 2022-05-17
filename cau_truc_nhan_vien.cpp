#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string name,ngaysinh,gtinh,diachi,dt,hopdong;
};

void nhap(NhanVien &A){
	getline(cin,A.name);
	cin >>A.gtinh;
	cin >> A.ngaysinh;
	scanf("\n");
	getline(cin,A.diachi);
	cin >> A.dt >> A.hopdong;
	
}

void in (NhanVien &A){
	cout << "00001" <<" " <<A.name << " " << A.gtinh << " " ;
	int n=A.ngaysinh.length();
	for (int i=0; i<n;i++){
		if(i==0 && A.ngaysinh[i+1]=='/') cout << "0"<< A.ngaysinh[i];
		else if(A.ngaysinh[i]=='/' && A.ngaysinh[i+2]=='/'){
			cout << A.ngaysinh[i] << "0";
		}
		else cout << A.ngaysinh[i];
	}
	cout << " " << A.diachi << " " << A.dt <<" ";
	for (int i=0; i<A.hopdong.length();i++){
		if(i==0 && A.hopdong[i+1]=='/') cout << "0"<< A.hopdong[i];
		else if(A.hopdong[i]=='/' && A.hopdong[i+2]=='/'){
			cout << A.hopdong[i] << "0";
		}
		else cout << A.hopdong[i];
	}
	
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}