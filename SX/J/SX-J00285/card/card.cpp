#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];

struct m1 {
	int b;
	bool l;
	int s;
};
int ton[300005];
m1 v[500005];
int ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int c = a[i];
		v[i].b = c;
		v[i].l = 1;
		if (ton[c] == 0) {
			ton[c] = i;
		} else {
			int d = ton[c];
			for (int j = d; j < i ; j++) {
				v[j].l = 0;
				v[j].s = d;
			}
			ton[c] = i;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (v[i].l) {
			ans[v[i].b]++;
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (v[j].l || v[j].s == i)
				ans[v[j].b]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
