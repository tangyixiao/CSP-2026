#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5, M = 3e5 + 5;

int n, m, a[N], lst[M], val[M], rot;
vector<int> g[M];

void dfs(int nowP) {
	for(const int &i : g[nowP]) {
		dfs(i);
		val[nowP] += val[i];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];

		++val[a[i]];
		lst[a[i]] = i;
	}

	for(int i = 1; i <= m; i++) {
		if (lst[i] != n) {
			g[a[lst[i] + 1]].push_back(i);
		} else rot = i;
	}

	dfs(rot);

	for(int i = 1; i <= m; i++) {
		cout << val[i] << " ";
	}

	return 0;
}