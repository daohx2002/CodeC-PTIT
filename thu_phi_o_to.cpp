#include <bits/stdc++.h>
using namespace std;
typedef struct loaixe{
    string xe;
    string bien;
    string dc;
    string date;
    int ghe;
} lx;
int main(){
    int a;
    cin >> a;
    cin.ignore();
    lx arr[a + 5];
    for (int i = 0; i < a; i++){
        cin >> arr[i].bien;
        cin >> arr[i].xe;
        cin >> arr[i].ghe >> arr[i].dc >> arr[i].date;
    }
    long long tien = 0;
    string ngay = arr[0].date;
    int c = 0;
    for (int i = 0; i < a; i++){
        if (arr[i].dc == "IN"){
            if (arr[i].date != ngay){
                cout << ngay << ": " << tien << endl;
                tien = 0;
                ngay = arr[i].date;
                c = 1;
            }
            if (arr[i].ghe == 5){
                tien += 10000;
            }
            else if (arr[i].ghe == 7){
                tien += 15000;
            }
            else if (arr[i].ghe == 2){
                tien += 20000;
            }
            else if (arr[i].ghe == 29){
                tien += 50000;
            }
            else if (arr[i].ghe == 45){
                tien += 70000;
            }
        }
    }
    if (c == 1)
    {
        cout << ngay << ": " << tien << endl;
        tien = 0;
        c = 1;
    }
}
