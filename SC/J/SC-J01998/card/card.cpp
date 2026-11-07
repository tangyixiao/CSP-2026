#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 5e5 + 5;

int n, m, a[N];
int vist[N];
int ans[N];
stack <int> Q;

signed main () {
	ios::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) vist[j] = 0;
		for (int j = i; j <= n; j++) {
			if (vist[a[j]]) while (Q.top () != a[j]) { vist[Q.top ()] = 0; Q.pop (); }
			else 
				Q.push (a[j]);
			vist[a[j]] = 1;
		}
		while (!Q.empty ()) { ans[Q.top ()]++; Q.pop (); }
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}