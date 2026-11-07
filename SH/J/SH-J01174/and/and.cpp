#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],vis[200010],ans,mx;
void dfs(int u){
	if(u==n+1){
		int cnt=0,sum=0;
		for(int i=1;i<=n;i++)if(vis[i])cnt++;
		if(cnt!=m)return;
		for(int i=1;i<=n;i++){
			if(vis[i]&&sum==0)sum=a[i];
			else if(vis[i])sum&=a[i];
		}
		ans=max(ans,sum);
		return;
	}
	vis[u]=1;
	dfs(u+1);
	vis[u]=0;
	dfs(u+1);
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],mx=max(mx,a[i]);
	if(n<=20){
		dfs(1);
		cout<<ans;
	}
	else if(m==1){
		cout<<mx;
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			int sum=0;
			for(int j=i+1;j<=n;j++){
				sum=a[i]&a[j];
				ans=max(ans,sum);
			}
		}
		cout<<ans;
	}
	else if(m==n){
		int sum=a[1];
		for(int i=2;i<=n;i++)sum&=a[i];
		cout<<sum;
	}
	return 0;
}

