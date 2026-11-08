#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
namespace CSPJ{
	int n,m;
	int a[500005];
	int las[500005],v[500005];
	vector<int> c[500005];
	int ans[300005];
	int dfs(int u=n){
		int sz=1;
		for(auto v:c[u]){
			sz+=dfs(v);
		}
		if(v[u])ans[v[u]]=sz;
		return sz;
	}
	void solve(){
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=n;i>=1;i--){
			las[i]=v[a[i]];
			v[a[i]]=i;
		}
		for(int i=1;i<=n;i++){
			if(las[i]==0)v[i]=a[i];
			else v[i]=0;
			if(i!=n){
				if(las[i]==0)c[i+1].push_back(i);
				else c[las[i]].push_back(i);
			}
		}
		dfs();
		for(int i=1;i<=m;i++)cout<<ans[i]<<(i!=m?" ":"\n");
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int Q=1;
//	cin>>Q;
	while(Q--)CSPJ::solve();
//while(1);
	return 0;
}
/*
CSP-J和CSP-S难度负相关。那下午有的受了…… 
万圣节密码：Trick||Treat!
s MB
s MB
*/

