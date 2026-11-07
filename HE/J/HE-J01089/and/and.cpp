#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	vector <long long>a;
	for(int i=0;i<=n-1;i++){
		int s;
		cin>>s;
		a.push_back(s);
	}
	sort(a.begin(),a.end());
	cout<<a[n-m];
		return 0;
} 


