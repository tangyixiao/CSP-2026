#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

vector<int> a;
bool vis[200001];
int maxn = -INT_MAX;
int nw = -1;
int n, m;
vector<int> temp;

void dfs(int t) {
	if (t == n - m) {
		maxn = max(maxn, nw);
		return;
	}
	for (int i = 0; i < a.size(); i++) {
		if (vis[i]) {
			continue;
		}
		int n1 = nw;
		if (nw == -1) {
			nw = a[i];
		}
		else {
			nw &= a[i];
		}
		vis[i] = true;
		dfs(t + 1);
		nw = n1;
		vis[i] = false;
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	dfs(0);
	cout << maxn;
	return 0;
}