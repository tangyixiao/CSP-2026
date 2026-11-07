#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5,mod=1e9+7;
char s[N];
int n,m,a[N],ans,maxx=-1,dp[N],vis[N];
void dfs(int step,int sum){
//	dp[step]=max(dp[step],sum);
	if(step==m){
		maxx=max(maxx,sum);
		return;
	}
//	if(sum<=dp[step]){
//		return;
//	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			if(step){
				dfs(step+1,sum&a[i]);
			}
			else{
				dfs(step+1,a[i]);
			}
			vis[i]=0;
		}
		
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1){
		cout<<maxx;
	}
	else if(m==2){
		maxx=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
	}
	else{
		maxx=-1;
		dfs(0,0);
		cout<<maxx;
//		cout<<dp[m];
	}
	return 0;
}
