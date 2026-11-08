#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl "\n"
const int MAXN = 5e5 + 5;
int n, m, a[MAXN], cnt[300005];
void solve(int l) {
	bool vis[300005];
	memset(vis, false, sizeof(vis));
	int k[MAXN], tot = 0;
	k[0] = 0;
	for (int i = l; i <= n; i++) {
		if (!vis[a[i]]) {
			vis[a[i]] = true;
			k[++tot] = a[i];
		} else {
			int pos;
			bool flag = false;
			for (int j = 1; j <= tot; j++) {
				if (flag) {
					k[j] = 0;
					continue;
				}
				if (k[j] == a[i]) {
					pos = j;
					flag = true;
				}
			}
			tot = pos;
		}
	}
	for (int i = 1; i <= tot; i++) {
		cnt[k[i]]++;
	}
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		solve(i);
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}
