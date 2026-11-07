#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
long long dp[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	long long ans=0;
	for(int i=1;i<=n;i++){
		for(int j=max(m,i);j>=2;j--){
			dp[j]=max(dp[j],dp[j-1]&a[i]);
		}
		dp[1]=max(dp[1],a[i]);
		ans=max(ans,dp[m]);
	}
	cout<<ans;
	return 0;
}