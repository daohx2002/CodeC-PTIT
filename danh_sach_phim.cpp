#include<bits/stdc++.h>
using namespace std;
string chuanhoa(int a){
	string End = "";
	while (a){
		End = (char)(a % 10 + '0');
		a /= 10;
	}
	while (End.size() < 3)
		End = '0' + End;
	return End;
}
class TheLoai {   
public:
    string theloai,ma;
    static int ID;
    TheLoai(){
        this -> theloai ="";
        this -> ma="";
    }
    friend istream &operator>>(istream &is, TheLoai &a){
        TheLoai :: ID++;
        a.ma = "TL" + chuanhoa((TheLoai::ID));
        getline(is,a.theloai);
        return is;
    }
    ~TheLoai(){
        this -> theloai= "";
        this -> ma ="";
    }
};

class Phim {
public:
    string ma, date, name,code;
    int tap;
    Phim(){
        this -> ma= "";
        this -> date= "";
        this -> name = "";
        this -> code = "";
        this -> tap=0;
    }
    static int ID;
    friend istream &operator>>(istream &is, Phim &a){
        Phim::ID++;
		a.code = "P" + chuanhoa((Phim::ID));
        is >> a.ma;
        is >> a.date;
        is.ignore();
        getline(is,a.name);
        is >> a.tap;
        return is;
    }
    friend ostream &operator<<(ostream &os, Phim a){
        os << a.code << " " << a.ma << " " << a.date << " " << a.name << " " << a.tap;
        os << endl;
        return os;
    }
    ~ Phim(){
        this -> ma= "";
        this -> date= "";
        this -> name = "";
        this -> code="";
        this -> tap=0;
    }
};
int TheLoai::ID = 0;
int Phim::ID = 0;
bool cmp(Phim a, Phim b)
{
	int check[10] = {6, 7, 8, 9, 3, 4, 1, 2};
	for (int i = 0; i < 8; i++)
	{
		if (a.date[check[i]] < b.date[check[i]])
			return 1;
		if (a.date[check[i]] > b.date[check[i]])
			return 0;
	}
	if (a.name < b.name)
		return 1;
	if (a.name > b.name)
		return 0;
	if (a.tap > b.tap)
		return 1;
	return 0;
}
void process(TheLoai tl[], int n, Phim p[], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(p[i].ma==tl[j].ma){
                p[i].ma= tl[j].theloai;
            }
        }
    }
    sort(p,p+m,cmp);
};
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}