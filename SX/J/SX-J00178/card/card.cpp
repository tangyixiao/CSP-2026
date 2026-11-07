#include <bits/stdc++.h>
using namespace std;
long long n, m, ans[300006], cnt, x[300006], s[300006];

bool fnd(int y) {
	for (int i = 1; i <= cnt; i++) {
		if (s[i] == y) {
			return true;
		}
	}
	return false;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (fnd(x[j])) {
				int ccnt = cnt;
				for (int k = ccnt; k >= 1; k--) {
					cnt--;
					if (s[k] == x[j]) {
						s[k] = 0;
						break;
					}
					s[k] = 0;
				}
			}
			s[++cnt] = x[j];
		}
		for (int j = 1; j <= cnt; j++) {
			ans[s[j]]++;
			s[j] = 0;
		}
		cnt = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
