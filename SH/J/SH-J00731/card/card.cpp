#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;
const int M = 3e5 + 5;
int n, m, a[N], vis[N], ans[M];

int main () {

	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);

	ios::sync_with_stdio (0);
	cin.tie (0);
	cout.tie (0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		deque<int> q;
		memset (vis, 0, sizeof(vis));

		for (int j = i; j <= n; j++) {
			while (q.size() && vis[a[j]]) {
				int u = q.back ();
				vis[u] = 0;
				q.pop_back();
			}

			q.push_back (a[j]);
			vis[a[j]] = 1;
		}

		while (q.size()) {
			int u = q.back ();
			ans[u]++;
			q.pop_back ();
		}
	}

	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}
