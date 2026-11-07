#include <bits/stdc++.h>
using namespace std;

int n, m;
int nxt[500005];
int a[500005];
int tmp[300005];
int ans[300005];

void dfs(int x) {
	for(int i = x; i <= n; i++) {
		if(nxt[i]) i = nxt[i] - 1;
		else {
			ans[a[i]]++;
		}
	}
}

int find(int x) {
	if(!nxt[x]) return x;
	else return nxt[x] = find(nxt[x]);
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(tmp[a[i]]) {
			nxt[tmp[a[i]]] = i;
		}
		tmp[a[i]] = i;
	}
	for(int i = 1; i <= m; i++) {
		find(i);
	}
	for(int i = 1; i <= n; i++) {
		dfs(i);
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
