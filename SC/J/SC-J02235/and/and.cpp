#include<bits/stdc++.h>
using namespace std;
const int N=2e4+5;
long long f[N];
long long dp[N][2005];
//最后一个点我过噶皮 
int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long mx=-1;
	for(int i=1;i<=n;i++){
		cin>>f[i];
		mx=max(mx,f[i]);
	}
	for(int i=1;i<=n;i++){
		dp[i][1]=mx;
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++)cout<<dp[i][j]<<" ";
//		cout<<endl;
//	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i][j],dp[i][j-1]&f[i]);
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++)cout<<dp[i][j]<<" ";
//		cout<<endl;
//	}
	cout<<dp[n][m]<<endl;
	return 0;
}