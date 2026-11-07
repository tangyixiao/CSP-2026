#include <bits/stdc++.h>
using namespace std;
int dp[20005][20005];
int n,m;
int a[20005];
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n==m){
		int anss=a[1];
		for(int i=2;i<=n;i++){
			anss=anss&a[i];
		}
		cout<<anss;
		return 0;
	}
	for(int i=1;i<=n;i++){
		dp[1][i]=a[i];
	}
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			int maxn=-1;
			for(int k=1;k<=n;k++){
				if(k==j) continue;
				maxn=max(maxn,dp[i-1][j]&dp[i-1][k]);
			}
			dp[i][j]=maxn;
		}
	}

	int maxans=-1;
	for(int i=1;i<=n-m+1;i++){
		maxans=max(maxans,dp[m][i]);
	}
	cout<<maxans;
	return 0;
}