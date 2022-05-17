#include <iostream>
#include <math.h>
using namespace std;
int main ()
{   
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin>>n;
        long long SDuong=0;
        long long amMax=-100005;
        long long Ai;
        long long S=0, S_tmp=0;
        long long ktd=0, kta=0;
        for (long long i=1; i<=n; i++)
        {
            cin>>Ai;
            S_tmp+=Ai;
            if (S_tmp<0) S_tmp=0;
            else S=max(S, S_tmp);
            if (Ai>=0)
            {
                SDuong+=Ai;
                ktd=1;
            }
            else
            {
                if (Ai>amMax) amMax=Ai;
                kta=1;
            }
        }
        if (ktd==0) cout<<amMax;
        else if (kta==0) cout<<SDuong;
        else cout<<S;
        cout << endl;
    }
}