#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,m,a[200005],ans=0,dp[200005];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0;
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(n<=2000&&m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)ans=max(ans,a[i]&a[j]);
		} 
		cout<<ans;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++)ans=ans&a[i];
	cout<<ans;
	return 0;
}
