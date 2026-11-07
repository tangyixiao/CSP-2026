#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 10;
const int M = 3e5 + 10;
int n, m, a[N], ans[M];

void solve(int idx) {
	int cnt = 0;
	int desk[N] = {};
	for (int i = idx; i <= n; i++) {
		int found = 0;
		for (int j = 1; j <= cnt; j++) {
			if (desk[j] == a[i]) {
				found = j;
				break;
			}
		}
		if (found == 0) {
			desk[++cnt] = a[i];
		} else {
			for (int j = found; j <= cnt; j++) {
				desk[j] = 0;
			}
			desk[found] = a[i];
			cnt = found;
		}
	}
	for (int j = 1; j <= cnt; j++) {
		ans[desk[j]] += 1;
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		solve(i);
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
