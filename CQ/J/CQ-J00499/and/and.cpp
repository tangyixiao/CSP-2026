#include <bits/stdc++.h>
using namespace std;
const int N=2005;
int dp[N][N];
int n,m;
int a[200005];
int mx[200005];
int ans=0;
void dfs(int u,int cnt,int sum,int f){
	if(u>n){
		if(cnt==m){
			ans=max(sum,ans);
		}
		return;
	}
	if(f==0){
		dfs(u+1,cnt,sum,0);
		dfs(u+1,cnt+1,a[u],1);
	}else{
		dfs(u+1,cnt,sum,f);
		dfs(u+1,cnt+1,sum&a[u],f);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>mx[i-1]){
			mx[i]=a[i];
		}else{
			mx[i]=mx[i-1];
		}
	} 
	if(n<=20){
		dfs(1,0,0,0);
		cout<<ans;
		return 0;
	}
	if(n>100000){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
		
	}
	for(int i=1;i<=n;i++){
		dp[i][0]=0;
		dp[i][1]=mx[i];
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=min(i,m);j++){
			dp[i][j]=max(dp[i-1][j],(dp[i-1][j-1]&a[i]));
//			cout<<dp[i-1][j-1]<<" "<<a[i]<<" "<<(dp[i-1][j-1]&a[i])<<"\n";
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
	cout<<dp[n][m];
	return 0;
} 
/*
5 3
31 3 1 15 7
*/
