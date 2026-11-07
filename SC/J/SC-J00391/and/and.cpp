#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;cin>>n>>m;
	vector<int> A(n+1);
	for(int i=1;i<=n;i++)cin>>A[i];
	vector<vector<ll>> f(n+1,vector<ll>(m+1));
	f[1][1]=A[1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m&&j<=i;j++){
			f[i][j]=max(f[i-1][j],(f[i-1][j-1]==0?A[i]:f[i-1][j-1]&A[i]));
		}
	}
	cout<<f[n][m];
	return 0;}