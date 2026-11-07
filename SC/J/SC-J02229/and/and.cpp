#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200002],vis[200002],m,mx,n,dp[200002];
void dfs(int x,int ans){
	if(x==m+1){
		mx=max(mx,ans);
		//cout<<ans<<" ";
		return ;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=1;
			if(ans==0)dfs(x+1,a[i]);
			else dfs(x+1,ans&a[i]);
			vis[i]=0;
		}
	}
}

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=50000){
		dfs(1,0);
		cout<<mx;
	}else{
		for(int i=1;i<=n;i++){
		dp[i]=a[i];
		//cout<<i<<" "<<dp[i]<<endl;
		}
		for(int i=1;i<=n;i++){
			for(int j=m;j>=1;j--){
				//if(j==1)dp[j]=max(dp[j],a[i]);
				if(i>=j&&j!=2)dp[j]=max(dp[j],dp[j-1]&a[i]);
				if(j==2)dp[j]=dp[j-1]&a[i];
				cout<<i<<" "<<j<<" "<<dp[j]<<endl;
			}
		}
		cout<<dp[m];
	}
	
	return 0;
}