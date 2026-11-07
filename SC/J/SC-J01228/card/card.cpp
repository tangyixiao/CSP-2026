#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],c[500010],sum[500010],ans[500010],dp[500010],s[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(b[a[i]]==0)b[a[i]]=i,c[i]=i;
		else c[i]=b[a[i]],b[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		if(c[i]==i)dp[i]=dp[i+1];
		else dp[i]++,dp[c[i]]--;
	}
	for(int i=1;i<=n;i++){
		dp[i]+=dp[i-1];
		ans[a[i]]=max(ans[a[i]],i-dp[i]);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
	
