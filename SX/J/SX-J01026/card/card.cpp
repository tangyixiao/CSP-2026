#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fi first
#define se second
#define pii pair<int,int>
const int N = 5e5+5;
int n, m, a[N], lst[N], f[N], id[N];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		id[a[i]] = i;
		f[a[i]]++;
	}
	sort(id + 1, id + 1 + m);
	for (int i = 1; i <= m; i++) {
		f[a[id[i] + 1]] += f[a[id[i]]];
	}
	for (int i = 1; i <= m; i++) {
		if (i < m)
			cout << f[i] << ' ';
		else
			cout << f[i];
	}

	return 0;
}
