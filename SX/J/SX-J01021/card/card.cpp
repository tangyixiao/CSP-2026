#include <bits/stdc++.h>
using namespace std;

int ans[300010], s[500010];
bool cnt[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[500010];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int inx = 1;
		for (int j = 1; j <= m; j++) {
			cnt[j] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (cnt[a[j]] == 0) {
				cnt[a[j]] = 1;
				s[inx] = a[j];
				inx++;
			} else {
				bool running = 0;
				for (int z = 1; z < inx; z++) {
					if (s[z] == a[j]) {
						inx = z;
						running = 1;
					}
					if (running == 1) {
						cnt[s[z]] = 0;
					}
				}
				cnt[a[j]] = 1;
				s[inx] = a[j];
				inx++;
			}
		}

		for (int j = 1; j < inx; j++) {
			ans[s[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
