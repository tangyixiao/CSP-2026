#include<bits/stdc++.h>
#define sjh0626s return
#define code 0
#define PII pair<int,int>
#define ll long long
#define all(g) g.begin(),g.end()
using namespace std;
const int N=5e5+10,M=3e5+10;
int T=1,n,m,a[N],ans[N],fa[N],lst[M];
vector<int>g[N];
int cnt[N];
void dfs(int u){
	ans[u]=1;
	for(auto v:g[u]){
		dfs(v);
		ans[u]+=ans[v];
	}
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(lst[a[i]])fa[lst[a[i]]]=i;
		lst[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		fa[lst[i]]=lst[i]+1;
	}
	for(int i=1;i<n;i++){
		g[fa[i]].emplace_back(i);
	}
	dfs(n);
	for(int i=1;i<=m;i++){
		cout<<ans[lst[i]]<<" ";
	}
}
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//cin>>T;
	while(T--)solve();
	sjh0626s code;
}
/*
盲猜图论建模
关于覆盖其实更像是跳过，直接发动 [King Crimson]，跳到了下一个节点，那么考虑连边
对于一个联通块内（如果没办法跳了就直接新开一个联通块）的想法
那么该怎样维护联通块就是我们需要考虑的了
首先考虑从后往前做，因为离线
实际上是维护一棵树然后求子树大小的问题，诶咋这么简单哈哈哈哈哈
诶不是我咋 AK 了，J 组这么水吗，比 2024 年简单多了
*/