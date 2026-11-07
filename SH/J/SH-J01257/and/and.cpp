#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
int n,m,a[N],dp[2][N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	dp[1][1]=a[1];
	for(int i=2;i<=n;++i){
		dp[2][1]=max(dp[1][1],a[i]);
		for(int j=2;j<=m;++j){
			if(i<j)dp[2][j]=0;
			dp[2][j]=max(dp[1][j-1]&a[i],dp[1][j]);
		}
		for(int j=1;j<=m;++j)dp[1][j]=dp[2][j];
	}
	cout<<dp[2][m]<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
