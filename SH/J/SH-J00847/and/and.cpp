#include<bits/stdc++.h>
using namespace std;
long long a[200010],ans=-1,n,m;
bool vis[200010];
void dfs(long long x,long long cnt){
	if(x==m+1){
		ans=max(ans,cnt);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		vis[i]=1;
		if(cnt==0){
			dfs(x+1,a[i]);
		}else{
			dfs(x+1,cnt&a[i]);
		}
		vis[i]=0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(1,0);
	cout<<ans;
	return 0;
} 
