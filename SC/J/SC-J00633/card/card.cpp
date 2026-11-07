#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e5 + 20;
int n, m, a[N], nxt[N], now[N], ck[N], siz[N], ans[N];
vector<int> e[N];

void dfs(int u, int fa){
	siz[u] = 1;
	ck[a[u]] ++;
	for(int v : e[u]){
		if(v == fa) continue;
		dfs(v, u);
		siz[u] += siz[v];
	}
	ck[a[u]] --;
	if(ck[a[u]] == 0) ans[a[u]] += siz[u];
}

signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) now[i] = -1;
	for(int i = n; i >= 1; i--){
		if(now[a[i]] == -1) nxt[i] = i + 1;
		else nxt[i] = now[a[i]];
		e[nxt[i]].push_back(i);
		e[i].push_back(nxt[i]);
		now[a[i]] = i;
	}
	dfs(n, n + 1);
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}