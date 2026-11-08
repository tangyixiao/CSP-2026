#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],dp[20001][2001],t[200001],ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		t[1]=max(t[1],a[i]); 
	}
	t[1]=a[1];
	for(int i=1;i<=n;++i){
		dp[i][1]=max(a[i],dp[i-1][1]);
		for(int j=2;j<=min(m,(long long)i);++j){
			for(int k=1;k<i;++k){
				dp[i][j]=max(dp[i][j],dp[k][j-1]&a[i]);
			}
			t[j]=max(t[j],dp[i][j]);
		}
	}
	/*
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout<<dp[i][j]<<' ';
		}
		cout<<'\n';
	}
	*/
	for(int i=1;i<=n;++i){
		ans=max(ans,dp[i][m]);
	}
	cout<<ans;
	return 0;
}
