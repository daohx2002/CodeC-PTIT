#include <bits/stdc++.h>
using namespace std;
int k = 1;

class SinhVien {
    string name, cla, dob;
    float gpa;
    int stt;

   public:
    friend istream &operator>>(istream &input, SinhVien &a) {
        cin.ignore();
        getline(cin, a.name);
        getline(cin, a.cla);
        getline(cin, a.dob);
        input >> a.gpa;
        a.stt = k;
        k++;
        return input;
    }

    friend ostream &operator<<(ostream &output, SinhVien &a) {
        if (a.dob[2] != '/') a.dob.insert(0, "0");
        if (a.dob[5] != '/') a.dob.insert(3, "0");
        output << "B20DCCN" << setfill('0') << setw(3) << a.stt << " " << a.name << " " << a.cla << " " << a.dob << " " << fixed << setprecision(2) << a.gpa << endl;
        return output;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
