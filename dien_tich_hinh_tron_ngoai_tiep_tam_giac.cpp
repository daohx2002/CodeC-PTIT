#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238
void S(){
	double x1,y1,x2,y2,x3,y3,o1,o2,o3,p, s, r;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	o1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	o2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	o3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	if(o1+o2<=o3 || o1+o3<=o2 || o2+o3 <= o1) {
		cout << "INVALID" << endl;
		return ;
	}
	p=(o1+o2+o3)/2;
	s = sqrt(p * (p-o1) * (p-o2) * (p-o3));
    r = o1 * o2 * o3 / (4 * s);
    cout << fixed << setprecision(3) << r*r*PI << endl;
}

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		S();
	}
}