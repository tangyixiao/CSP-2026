#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
const ll inf = 1e18;
ll n, m, a[N], ans;
vector<int> vec[2];

void dfs(int x, int u) {
	int v = u ^ 1;
	vec[v].clear();

	for(; x >= 0; x--) {
		int cnt = 0;
		for(auto j : vec[u])
			if(j & (1 << x))
				cnt++;
		if(cnt >= m) break;
	}

	if(x < 0) return;

	for(int i : vec[u])
		if(i & (1 << x))
			vec[v].push_back(i);

	ans |= (1 << x);
	dfs(x - 1, v);
}

void solve() {
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
		vec[0].push_back(a[i]);
	}

	dfs(30, 0);

	cout<<ans;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
