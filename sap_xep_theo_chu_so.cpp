#include<bits/stdc++.h>
#include <vector>
using namespace std;
 
int myCompare(string X, string Y){
    string XY = X.append(Y);	// nối X với Y
    string YX = Y.append(X);	// nối Y với X
    return XY.compare(YX) > 0 ? 1 : 0;
}
//Sắp xếp các phần tử của vector
void printLargest(vector<string> arr){ 
    sort(arr.begin(), arr.end(), myCompare);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}
int main(){
	int t;
	cin>>t;
	while (t--){
		vector<string> arr;
		int n;
		cin>>n;
		cin.ignore();
		string x;
		for(int i=0;i<n;i++){
			cin>>x;
			arr.push_back(x);
		}
		printLargest(arr);
		cout<<endl;
	}
    return 0;
}
