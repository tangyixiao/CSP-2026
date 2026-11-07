#include<bits/stdc++.h>
using namespace std;
int n,m,ans=INT_MAX,a[200010],dp[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n*m<=1e8){
		dp[0]=INT_MAX;
		for(int i=1;i<=n;i++)
			for(int j=m;j>=1;j--) dp[j]=max(dp[j],dp[j-1]&a[i]);
		cout<<dp[m],exit(0);
	}else{
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=m;i++) ans&=a[i];
		cout<<ans,exit(0);
	}
	
	return 0;
}