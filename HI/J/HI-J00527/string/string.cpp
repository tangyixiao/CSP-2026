#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[1005];
	string c,s;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s+=c[i];
		}
	}
	

	return 0;
}


