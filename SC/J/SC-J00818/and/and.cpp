#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i]; dp[i]=-1;
	}
	for(int i=1;i<=n;++i){
		for(int k=1;k<=m;++k){
			for(int j=1;j<=n;++j){
				if(j==i) continue;
				int g=a[j]&a[i];
				dp[i]=max(dp[i],g);
			}
		}
	}
	int ma=-1;
	for(int i=1;i<=n;++i){
		if(ma<dp[i]) ma=dp[i];
	}
	cout<<ma;
	return 0;
}