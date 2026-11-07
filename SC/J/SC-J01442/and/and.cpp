#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> a(n),num(n);
	vector<int> s(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i]=a[i]&1;
	}
	sort(a.begin(),a.end(),greater<int>());
	int ans=INT_MAX;
	for(int i=0;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}