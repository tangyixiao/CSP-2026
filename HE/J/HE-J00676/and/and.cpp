#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans,dp[5000][5000];
void dfs(int x,int cnt,int sum){
	if(cnt>n)return;
	if(x==m){
		if(sum>ans)ans=sum;
		return;
	}
	for(int i=cnt;i<=n;i++){
		dfs(x+1,cnt+1,sum&a[cnt]);
		dfs(x,cnt+1,sum);
	}
}
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	/*for(int i=1;i<=m;i++){
		for(int j=n;j>=1;j--){
			dp[i][j]=max(dp[i][j],dp[i-])
		}
	}*/
	dfs(0,1,a[1]);
	cout<<ans;
	return 0;
}
