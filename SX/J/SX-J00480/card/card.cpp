#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, vis[300005], sum[300005], a[300005], ans, b, tot;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			b = 1;
	}
	if (b == 0) {
		for (int i = 2; i <= n; i++) {
			if (a[i] == a[i - 1])
				a[i - 1] = 0;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				sum[a[j]]++;
			}
		}
		for (int i = 1; i <= m; i++)
			cout << sum[i] << " ";
		return 0;
	}





	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			sum[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[i] == a[j]) {
				for (int k = i; k < j; k++) {
					vis[k] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
		if (vis[i])
			sum[i]--;
	for (int i = 1; i <= m; i++) {
		ans = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j] == i) {
				ans = max(ans, sum[j]);
			}
		}
		cout << ans << " ";
	}
	return 0;
}
