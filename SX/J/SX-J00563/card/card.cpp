#include <bits/stdc++.h>
using namespace std;
const int N = 500010, M = 300010;
long long n, ma, m;
int a[N], ans[M];

int main() {
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
		int q[n + 1 - i] = {0};
		int b = 0, e = 0;
		for (int j = i; j <= n; j++) {
			int f = -1;
			for (int k = e; k < b; k++) {
				if (q[k] == a[j]) {
					f = k;
					break;
				}
			}
			if (f == -1) {
				q[b] = a[j];
				b++;
			} else {
				b = f;
				q[b] = a[j];
				b++;
			}
		}
		for (int k = 1; k <= m; k++) {
			for (int j = e; j < b; j++) {
				if (q[j] == k)
					ans[k]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
