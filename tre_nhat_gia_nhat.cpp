#include<bits/stdc++.h>
using namespace std;

struct ten{
	char ten[100],sn[100];
	int nam,thang,ngay;
}ds[1000];

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; i++){
        cin.ignore();
		cin >> ds[i].ten;
		cin >> ds[i].sn;
		char *p=strtok(ds[i].sn,"/");
		ds[i].ngay=atoi(p);
		p=strtok(NULL,"/");
		ds[i].thang=atoi(p);
		p=strtok(NULL,"/");
		ds[i].nam=atoi(p);
	}
	for (int i=0; i<t; i++){
		for (int j=i;j<t; j++){
			if(ds[i].nam > ds[j].nam){
				struct ten tmp=ds[i];
				ds[i]=ds[j];
				ds[j]=tmp;
			}
		}
	}
	for (int i=0; i<t; i++){
		for (int j=i;j<t; j++){
			if(ds[i].nam == ds[j].nam){
				if(ds[i].thang > ds[j].thang){
					struct ten tmp=ds[i];
					ds[i]=ds[j];
					ds[j]=tmp;
				}
			}
		}
	}
	for (int i=0; i<t; i++){
		for (int j=i;j<t; j++){
			if(ds[i].nam == ds[j].nam){
				if(ds[i].thang == ds[j].thang){
				if(ds[i].ngay > ds[j].ngay){
					struct ten tmp=ds[i];
					ds[i]=ds[j];
					ds[j]=tmp;
				}
			}
		}
	}
}
    cout << ds[t-1].ten << endl;
    cout << ds[0].ten;
}

