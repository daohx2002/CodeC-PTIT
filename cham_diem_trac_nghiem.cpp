#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    char de101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char de102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    while(test--){
        int n;
        cin >> n;
        float diem = 0;
        if(n == 101){
            char s1[15];
            for(int i=0; i<=14; i++){
                cin >> s1[i];
                if(s1[i] == de101[i]){
                    diem ++;
                }
            }
        }
        if(n == 102){
            char s2[15];
            for(int i=0; i<=14; i++){
                cin >> s2[i];
                if(s2[i] == de102[i]){
                    diem ++;
                }
            }
        }
        cout << fixed << setprecision(2) << diem*2/3 << endl;
    }
} 