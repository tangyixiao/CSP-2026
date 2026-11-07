#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vector<long long> a(n);
	vector<long long> b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<a[0];
	return 0;
}