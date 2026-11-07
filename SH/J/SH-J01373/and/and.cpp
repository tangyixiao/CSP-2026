#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],dp[3][200010],pre[200010],suf[200010],maxx;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	pre[1]=a[1];
	for(int i=2;i<=n;i++){
		pre[i]=(pre[i-1]&a[i]);
	}
	suf[n]=a[n];
	for(int i=n-1;i>=1;i--){
		suf[i]=(suf[i+1]&a[i]);
	}
	if(m==n-1){
		for(int i=2;i<n;i++){
			int tmp=(pre[i-1]&suf[i+1]);
			maxx=max(maxx,tmp);
		}
		maxx=max(maxx,pre[n-1]);
		maxx=max(maxx,suf[2]);
		cout<<maxx;
	}
	else{
		for(int i=1;i<=n;i++){
			dp[1][i]=a[i];
		}
		for(int i=2;i<=m;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<j;k++){
					dp[2][j]=max(dp[2][j],(dp[1][k]&dp[1][j]));
				}
			}
			for(int j=1;j<=n;j++){
				dp[1][j]=dp[2][j];
				dp[2][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			maxx=max(maxx,dp[1][i]);
		}
		cout<<maxx;
	}
	return 0;
}

