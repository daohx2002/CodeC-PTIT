#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    for (int i = 0; i < n;i++) cout << a[i] ;
    cout << " ";
}

void process(int n, int m, int tmp){
    int max[100]={0},min[100]={0};
    if(m > 9 *n || (m == 0 && n > 2)){
		cout << "-1 -1";
		return;
	}
    for (int i=0; i<n;i++){
        if (m>=9){
            max[i]=9;
            m-=9;
        }
        else if(m!=0){
            max[i]=m;
            m=0;
        }
        else break;
    }
    for (int i=n-1; i>0;i--){
        if (tmp>=9){
            min[i]=9;
            tmp-=9;
        }
        else if(tmp!=0){
            min[i]=tmp;
            tmp=0;
        }
        else break;
    }
    min[0]=tmp+1;
    print(min,n);
    print(max,n);
}

int main(){
    int n,m,tmp;
    cin >> n >> m;
    tmp=m-1;
    process(n,m,tmp);
}