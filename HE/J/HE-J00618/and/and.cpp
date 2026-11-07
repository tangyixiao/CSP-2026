#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200020];
int ans;
bool vis[200020];
void dfs(int step,int x,int val){
	if(x==m){
		ans=max(ans,val);
		return;
	}
	if(val<ans){
		return;
	}
	if(step==n){
		return;
	}
	for(int i=n;i>=1;i--){
		if(vis[i]){
			continue;
		}
		if(a[i]<=ans){
			break;
		}
		vis[i]=1;
		dfs(step+1,x,val);
		if(x==0){
			dfs(step+1,x+1,a[i]);
		}
		dfs(step+1,x+1,val&a[i]);
		vis[i]=0;
	}
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	dfs(0,0,0);
	cout<<ans;
	return 0;
} 
