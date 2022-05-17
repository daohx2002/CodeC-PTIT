#include<bits/stdc++.h>
using namespace std;
void sx(int a[], int n, int x){  
    for (int i = 1; i < n; i++) {
        int m = abs(a[i] - x);
        int j = i - 1;
        if (abs(a[j] - x) > m) {
            int temp = a[i];
            while (abs(a[j] - x) > m && j >= 0) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }
    }
}
void in(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main(){
    int test;
    cin >> test;
    while (test--){
        int n,k;
        int a[100005],b[100005];
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sx(a, n, k);
    	in(a, n);
    	cout<<endl; 
    }
}