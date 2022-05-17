#include<bits/stdc++.h>

using namespace std;
void inxuoi(int A[][105],int B[][105],int x1,int x2,int y1,int y2);
void innguoc(int A[][105],int B[][105],int x1,int x2,int y1,int y2);
void inxuoi(int A[][105],int B[][105],int x1,int x2,int y1,int y2){
    for(int i=x1;i<=x2;i++){
        if(i==x1&&A[y1+1][x1]!=0){
            B[y1][i]=A[y1+1][x1];
            A[y1+1][x1]=0;
        }
        else if(i==x1&&A[y1+1][x1]==0){
            B[y1][i]= A[y1][i];
           
        }
        else{
            B[y1][i]=A[y1][i-1];
            A[y1][i-1]=0;
        }
    }
    for(int i=y1+1;i<=y2;i++){
            B[i][x2]=A[i-1][x2];
            A[i-1][x2]=0;
        
    }
    if(x1 < x2 && y1 < y2) {
		y1++;
		x2--;
		innguoc(A,B,x1,x2,y1,y2);
	}
}
void innguoc(int A[][105],int B[][105],int x1,int x2,int y1,int y2){
    for(int i=x2;i>=x1;i--){
        B[y2][i]=A[y2][i+1];
        A[y2][i+1]=0;
    }
    for(int i=y2-1;i>=y1;i--){
        B[i][x1]=A[i+1][x1];
        A[i+1][x1]=0;
    }
    if(x1 < x2 && y1 < y2) {
		y2--;
		x1++;
		inxuoi(A,B,x1,x2,y1,y2);
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int A[105][105],B[105][105];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> A[i][j];
            }
        }
        int x1=0;
        int x2=m-1;
        int y1=0;
        int y2=n-1;
        inxuoi(A,B,x1,x2,y1,y2);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << B[i][j] << " ";
            }
            
        }
        cout << endl;
    }

}