#include <bits/stdc++.h>
using namespace std;
long long ans[300010];

struct {
	long long yg, sz;
} a[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m ;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].sz;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			a[j].yg = 0;
		}
		for (int j = i; j <= n; j++) {
			for (int k = i; k <= j; k++) {
				if (a[j].sz == a[k].sz && a[k].yg == 0) {
					for (int s = k; s < j; s++) {
						a[s].yg = 1;
					}
				}
			}
		}
		for (int j = i; j <= n; j++) {
			if (a[j].yg == 0) {
				ans[a[j].sz]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}