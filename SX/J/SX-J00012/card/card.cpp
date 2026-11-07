#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, a[500005], ans[500005], ans1[300005], tot, tong[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		tot = 0;
		memset(ans, 0, sizeof(ans));
		for (int j = i; j <= n; j++) {
			ll low = lower_bound(ans + 1, ans + tot + 1, a[j]) - ans;
			if (ans[low] == a[j]) {
				for (int k = low + 1; k <= tot; k++)
					ans[k] = 0;
				tot = low;

			} else
				ans[++tot] = a[j];

		}
//		for (int i = 1; i <= n; i++)
//			cout << ans[i] << " ";
		for (int j = 1; j <= m; j++) {
			ll low = lower_bound(ans + 1, ans + tot + 1, j) - ans;
			if (ans[low] == j) {
				ans1[j]++;
				//	cout << ans[low] << endl;
			}

		}
		//	cout << endl;
	}
	for (int j = 1; j <= m; j++) {
		cout << ans1[j] << ' ';
	}
	return 0;
}
