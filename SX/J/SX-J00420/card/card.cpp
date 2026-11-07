#include <bits/stdc++.h>
using namespace std;
int a[500005];
int la[500005];
int ans[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		la[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		int cnt = i;
		ans[a[cnt]] += 1;
		while (cnt < n) {
			if (la[a[cnt]] > cnt) {
				cnt = la[a[cnt]];
			}
			cnt += 1;
			ans[a[cnt]] += 1;
		}
	}
	cout << ans[1];
	for (int i = 2; i <= m; i++) {
		cout << " " << ans[i];
	}
	return 0;
}
