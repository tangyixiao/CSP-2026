#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

const int N = 5e5 + 5, M = 3e5 + 5;
int n, m, a[N], r[M];
int sum[M], sn[N];
vector<int> t[N];
int cnt[N];

void dfs(int u) {
	sn[u] = 1;
	cnt[a[u]]++;
	bool flag = (cnt[a[u]] == 1);
	for (int v : t[u]) {
		dfs(v);
		sn[u] += sn[v];
	}
	if (flag) sum[a[u]] += sn[u];
	cnt[a[u]]--;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = n; i >= 1; i--) {
		if (r[a[i]] == 0) {
			r[a[i]] = i;
			t[i + 1].push_back(i);
		} else {
			t[r[a[i]] + 1].push_back(i);
		}
	}
	dfs(n + 1);
	for (int i = 1; i <= m; i++)
		cout << sum[i] << ' ';
	return 0;
}
