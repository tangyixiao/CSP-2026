#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e3+5;
int dp[N][N];
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn=a[1]; 
	for(int i=1;i<=n;i++){
		maxn=max(maxn,a[i]);
		dp[1][i]=maxn;
	}
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]&a[j]);
		}
	}
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++) cout<<dp[i][j]<<" ";
//		cout<<"\n";
//	}
	cout<<dp[m][n];
	return 0;
} 