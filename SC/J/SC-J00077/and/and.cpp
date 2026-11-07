#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
int dp[200005][200005];
int maxn=INT_MIN;
/*void dfs(int p,int x){
	int cnt;
	if(x>m) return;
	
	for(int i=p;i<=n;i++){
		cnt
	}
	dfs
}*/
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i][1]=a[i];
	}
	int ans=a[1];
	if(m==n){
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	//dp[0][0]=-1;	

	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		
		
	}maxn=max(maxn,dp[i][m]);
	}
	cout<<maxn;
	return 0;
}