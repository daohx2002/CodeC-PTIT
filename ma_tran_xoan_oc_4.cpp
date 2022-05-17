#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    int n, k=0; 
    cin >> n; 
    int a[n][n], c[n*n]; 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){ 
            cin>>a[i][j]; 
            c[k] = a[i][j]; 
            k++;
        } 
    } 
    sort(c, c+k);
    int d=0, l=0;
	int hang=n-1, cot=n-1;
	int dem=1;
	while(d<=n/2){
		for(int i=d; i<=cot; i++){
			a[d][i] = c[l];
			l++;
			dem++;
		}
		for(int i=d+1; i<=hang; i++){
			a[i][cot] = c[l];
			l++;
			dem++;
		}
		for(int i=cot-1; i>=d; i--){
			a[hang][i] = c[l];
			l++;
			dem++;
		}
		for(int i=hang-1; i>=d+1; i--){
			a[i][d] = c[l];
			l++;
			dem++;
		}
		d++;
		hang--;
		cot--;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}