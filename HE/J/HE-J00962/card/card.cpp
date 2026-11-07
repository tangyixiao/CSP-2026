#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 50, M = 3e5 + 50;
int n, m, a[N], e[M], ans[M], cnt[M];
signed main () {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin . tie(0), cout . tie(0);
	cin >> n >> m;
	bool flag = true;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) {
			flag = false;
		}
		e[a[i]] = i;
		cnt[a[i]] ++;
	} 
	if (! flag) {
		for (int i = 1; i <= n; i ++) {
			for (int j = i; j <= n; j = e[a[j]] + 1) {
				ans[a[j]] ++;
			} 
		}
		for(int i = 1; i <= m; i ++) {
			cout << ans[i] << " ";
		} 
	} else {
		for (int i = 1; i <= m; i ++) {
			cnt[i] += cnt[i - 1];
			cout << cnt[i] << " ";
		}
	}
	return 0;
}
 
