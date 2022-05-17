#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string name, cla, dob;
	float gpa;
};

void nhap(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].name);
		getline(cin, ds[i].cla);
		getline(cin, ds[i].dob);
		cin >> ds[i].gpa;
	}	
}

void in(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << "B20DCCN" << setfill('0') << setw(3) << i + 1 << " ";
		transform(ds[i].name.begin(), ds[i].name.end(), ds[i].name.begin(), ::tolower);
		string tmp = ""; 
		stringstream u;
        u << ds[i].name;
        vector<string> t;
    	while(u >> tmp){
    		t.push_back(tmp);	
    	}
    	for (int i = 0; i < t.size();i++){
			string temp = t[i];
			temp[0] = toupper(temp[0]);
			cout << temp << " ";	
		}
		cout << ds[i].cla << " ";
		if (ds[i].dob[2] != '/') ds[i].dob.insert(0, "0");
		if (ds[i].dob[5] != '/') ds[i].dob.insert(3, "0");
		cout << ds[i].dob << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}	
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

