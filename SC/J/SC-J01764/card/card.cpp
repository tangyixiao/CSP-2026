#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 0x3f3f3f3f3f3f3f3f;
int n, m, a[1000005], vis[1000005], tot[1000005], siz[1000005];
vector<int> g[1000005];
void dfs(int u, int fa){
	siz[u] = tot[u];
	for(int i = 0; i < g[u].size(); i ++){
		int v = g[u][i];
		if(v != fa){
			dfs(v, u);
			siz[u] += siz[v];
		}
	}
}
void Solve(int Case){
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		tot[a[i]] ++;
	}
	vis[a[n]] = 1;
	for(int i = n - 1; i >= 1; i --){
		if(!vis[a[i]]){
			g[a[i]].push_back(a[i + 1]);
			g[a[i + 1]].push_back(a[i]);
		}
		vis[a[i]] = 1;
	}
	dfs(a[n], 0);
	for(int i = 1; i <= m; i ++){
		cout << siz[i] << " ";
	}
}
signed main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t = 1;
	// cin >> t;
	for(int i = 1; i <= t; i ++){
		Solve(i);
	}
	return 0;
}
