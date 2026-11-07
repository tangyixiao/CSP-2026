#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
ll n, m, a[N], sum[N], tong[N], ans[N], l = 1, rr, f, r;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	ll mm = m + 1;
	while (mm--) {
		r = 0, f = 0;
		for (int i = l; i <= n; i++) {
			sum[++r] = a[i];
			for (int j = 1; j <= r; j++) {
				if (sum[j] == a[i]) {
					f = j;
					break;
				}
			}
			if (f != 0) {
				r = f;
			}
		}
		for (int i = l; i <= n; i++) {
			tong[sum[i]]++;
		}
		l++;
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		if (a[i] != a[i + 1])
			ans[++rr] = a[i];
	}
	for (int i = 1; i <= rr; i++) {
		cout << tong[ans[i]] << " ";
	}
	return 0;
}