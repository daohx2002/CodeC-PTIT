#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
    getline(cin, a);
	int d=0,i,vt,l=a.size();
	char b[100], k=0;
	while(a[d]==' '){
		d++;
	}
	while(a[l-1]==' '){
		l--;
	}
	if(a[d]>='A' && a[d]<='Z'){
		b[k]=a[d]+32;
        k++;
	}
	for(i=d;i<l;i++){
		if(a[i]==' ' && a[i+1]!=' ') {
			if(a[i+1]>='A' && a[i+1]<='Z'){
				a[i+1]=a[i+1]+32;
			}
		b[k] = a[i+1];
        k++;
		vt=i;
	    }
	}
	for(i=vt+1;i<l;i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]=a[i]+32;
		}
		cout << a[i];
	}
    for(int i=0; i<k-1; i++){
        cout << b[i];
    }
	printf("@ptit.edu.vn");
}