#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],dp[100005][2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=1;
			dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i-1][j-a[i]]));
		}
	}
	int maxn=-1;
	for(int i=1;i<=n;i++){
		maxn=max(maxn,dp[m][i]);
	}
	cout<<maxn;
	return 0;
}