#include <bits/stdc++.h>
//#define int long long
using namespace std;
int ans[500010], cnt[500010], pos[500010], a[500010], v[500010], cnt2[500010];
bool vis[500010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
		pos[a[i]] = i;
	}
	int len = 0;
	for (int i = n; i >= 1; i--) {
		if (vis[a[i]])
			continue;
		vis[a[i]] = 1;
		v[++len] = a[i];
	}
	for (int i = len; i >= 1; i--) {
		cnt2[v[i]] += cnt[v[i]];
		if (i == 1)
			continue;
		cnt2[a[pos[v[i]] + 1]] += cnt2[v[i]];
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt2[i] << ' ';
	}
	return 0;
}
