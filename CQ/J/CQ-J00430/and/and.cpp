#include<bits/stdc++.h>
using namespace std;
int n,m,a[200009],vis[200009],maxx=0;
void dfs(int x,int cnt){
	if(x==m){
		maxx=max(maxx,cnt);
		return;
	}for(int i=1;i<=n;i++){
		if(vis[i]==1){
			continue;
		}vis[i]=1;
		dfs(x+1,cnt&a[i]);
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==m){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		long long cnt=a[1];
		for(int i=2;i<=n;i++){
			cnt=cnt&a[i];
		}cout<<cnt;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		vis[i]=1;
		dfs(1,a[i]);
		vis[1]=0;
	}cout<<maxx;
	
	
	return 0;
	
}
