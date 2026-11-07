#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100010];
int dp[1010][1010]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	if(m==1){
		int p=-1;
		for(int i=1;i<=n;i++){
			p=max(p,a[i]);
		}
		cout<<p;
		return 0;
	}
	else if(m==2){
		int ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	dp[1][1]=a[1];
	for(int i=2;i<=n;i++){
		dp[i][1]=max(dp[i-1][1],dp[i][1]);
	}
	for(int i=2;i<=m;i++){
		dp[i][i]=dp[i-1][i-1]&a[i];
	}
	for(int i=3;i<=n;i++){
		for(int j=2;j<min(m,i);j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]&a[i]);
		}
	}
	cout<<dp[n][m];
    return 0;
}