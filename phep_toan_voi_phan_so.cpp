#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
	long long tu,mau;
};

void rutgon(PhanSo &p){
	long long UC=__gcd(p.tu,p.mau);
	p.tu/=UC;
	p.mau/=UC;
}

void in(PhanSo &p){
	cout << p.tu << "/" << p.mau<<" ";
}

struct PhanSo tong(PhanSo &p, PhanSo &q){
	long long BC=(p.mau*q.mau)/__gcd(p.mau,q.mau);
	struct PhanSo sum;
	sum.mau= BC*BC;
	sum.tu= p.tu*(BC/p.mau) + q.tu*(BC/q.mau);
	sum.tu*=sum.tu;
	return sum;
}

void process(PhanSo &a, PhanSo &b){
	rutgon(a);rutgon(b);
	struct PhanSo c=tong(a,b),d;
	d.tu=a.tu*b.tu*c.tu;
	d.mau = a.mau*b.mau*c.mau;
	rutgon(c);rutgon(d);
	in(c);in(d);
	cout << endl;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
