#include<bits/stdc++.h>
using namespace std;
int n,m,ans,maxn,a[200005],vis[200005];
void dfs(int cnt,int sum){
	if(cnt>=m){
		if(cnt==m)ans=max(ans,sum);
		return ;
	}for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		dfs(cnt+1,sum&a[i]);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		ans&=a[i];
		maxn=max(maxn,a[i]);
	}if(m==1){
		cout << maxn;
		return 0;
	}if(m==n){
		cout << ans;
		return 0;
	}ans=0;
	for(int i=1;i<=n;i++){
		dfs(0,a[i]);
	}
	cout << ans;
	return 0;
}
