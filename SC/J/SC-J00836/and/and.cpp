#include<bits/stdc++.h>
using namespace std;
int n,m,maxn=INT_MIN;
int a[200005],vis[200005];
void dfs(int ans,int step){
	if(step==m){maxn=max(maxn,ans);return;}
	for(int i=1;i<=n;i++){
		if(vis[i]==1)continue;
		vis[i]=1;
		dfs(ans&a[i],step++);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		vis[i]=1;
		dfs(a[i],1);
	}
	cout<<maxn;
	return 0;
} 