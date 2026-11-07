#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int dp[200005][2005];
void dfs(int step,int cnt,int pre){
	if(cnt==m){
		ans=max(ans,pre);
		return ;
	}
	if(step>n)return ;
	dfs(step+1,cnt,pre);
	dfs(step+1,cnt+1,pre&a[step]);
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],dp[i][1]=max(a[i],dp[i-1][1]);
	if(m==n-1&&n*n<=300000000){
		for(int i=1;i<=n;i++){
			int num;
			if(i==1)num=a[2];
			else num=a[1];
			for(int j=1;j<=n;j++)
				if(i!=j)num=(num&a[j]);
			ans=max(ans,num);
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++)ans=(ans&a[i]);
		cout<<ans;
		return 0;
	}
	if(n<=20){
		for(int i=1;i<=n-m+1;i++)dfs(i+1,1,a[i]);
		cout<<ans;
		return 0;
	}
	if(m>=2005||n*m>=300000000){
		sort(a+1,a+n+1,greater<int>());
		cout<<a[m];
		return 0;
	}
	if(m==2&&n*n<=300000000){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++)
		for(int j=2;j<=m;j++)
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
	cout<<dp[n][m];
	return 0;
}
