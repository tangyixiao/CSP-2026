#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],dp[2010][2][2010];
int dfs(int i,int j,int step){
	if(dp[i][j][step]!=-1) return dp[i][j][step];
	if(i>n&&step!=m) dp[i][j][step]=~a[i-1];
	else if(i>n) dp[i][j][step]=a[i-1];
	else if(j) dp[i][j][step]=max(dfs(i+1,0,step+1)&a[i],dfs(i+1,1,step+1)&a[i]);
	else dp[i][j][step]=max(dfs(i+1,0,step),dfs(i+1,1,step));
	return dp[i][j][step];
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<max(dfs(1,0,0),dfs(1,1,0));
	return 0;
} 
