#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	string m, h; 
	cin >> n;
	for(int i=1; i<= n; i++){
		cin>>m;
		for(int j=1; j<=m[i]; j++){
			cin >> h;
			s += h;
		}
	}
	cout << 0;
	return 0;
}
