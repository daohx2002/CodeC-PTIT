#include<bits/stdc++.h>
using namespace std;

struct SoPhuc {
	int thuc;
	int ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B) {
	A.thuc += B.thuc;
	A.ao += B.ao;
	B.thuc = A.thuc;
	A.thuc *= A.thuc;
	A.thuc += A.ao*A.ao*-1;
	A.ao = 2*B.thuc*A.ao;
	return A;
}
void hien_thi(SoPhuc A){
	cout << A.thuc <<" + "<< A.ao << "i"<<endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}