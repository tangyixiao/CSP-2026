#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; cin>>n>>m;
	vector<ll> a(n);
	vector<ll> s(n);
	s[0]=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i+1]=(s[i]&a[i]);
	}
	for(int i=0;i<=n;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}