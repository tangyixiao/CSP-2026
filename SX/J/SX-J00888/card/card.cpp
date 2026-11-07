#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int n, m;
int a[N];
bool st[N];
int cnt[N];
bool p;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			p = 1;
	}
	if (p == 0) {
		for (int i = 1; i <= n; i++) {
			cnt[a[i]]++;
		}
		for (int i = 1; i <= m; i++) {
			cnt[i] += cnt[i - 1];
			cout << cnt[i] << ' ';
		}
		return 0;
	}
	for (int t = 1; t <= n; t++) {
		memset(st, 0, sizeof st);
		for (int j = t; j <= n; j++) {
			if (st[a[j]]) {
				for (int i = j - 1; a[i] != a[j]; i--)
					st[a[i]] = 0;
				st[a[j]] = 1;

			} else
				st[a[j]] = 1;
		}
		for (int i = 1; i <= m; i++) {
			cnt[i] += st[i];
		}
	}
	for (int i = 1; i <= m; i++)
		cout << cnt[i] << ' ';
	return 0;
}
