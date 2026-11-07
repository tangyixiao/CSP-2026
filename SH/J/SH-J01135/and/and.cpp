#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int dp[2009];
int a[200009],h[200009],vis[200009],G[200009];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (n<=2000){
		memset(dp,-0x3f,sizeof(dp));
		dp[0]=1048575;
		for (int i=1;i<=n;i++){
			for (int j=m;j>=1;j--){
				dp[j]=max(dp[j],(dp[j-1]&a[i]));
			}
		}
		cout<<dp[m];
		return 0;
	} 
	cout<<1; 
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
