#include<bits/stdc++.h>
#define int long long
using namespace std;
int inf=(1<<30);
int n,m,a[1000010],ans=-9e18,sum[1000010];
void dfs(int cnt,int s,int g){
	if(cnt==n+1){
		if(g==m) ans=max(ans,s);
		return;
	}
	if(s==0){
		dfs(cnt+1,a[cnt],g+1);
		dfs(cnt+1,s,g);
	}
	else{
		dfs(cnt+1,s & a[cnt],g+1);
		dfs(cnt+1,s,g);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sum[1]=a[1];
	if(n<=20){
		dfs(1,0,0);
		cout<<ans<<"\n";
		return 0;
	}
	if(m==1){
		int maxx=0;
		for(int i=1;i<=n;i++) maxx=max(maxx,a[i]);
		cout<<maxx<<"\n";
		return 0;
	}
	else if(m==n){
		int ans=0;
		for(int i=1;i<=n;i++) ans=(ans & a[i]);
		cout<<ans<<"\n";
	}
	else if(m==2){
		int ans=-9e18;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n&&i!=j;j++){
				ans=max(ans,1ll*(a[i] & a[j]));
				cout<<(a[i] & a[j])<<"\n";
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
