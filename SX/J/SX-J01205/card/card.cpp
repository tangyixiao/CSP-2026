#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005], c[500005], cnt[300005];
void play();

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	play();
	return 0;
}

void play() {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			//	bool f[300005];
			if (j != n) {
				for (int x = 0; x <= n; x++) {
					c[x] = 0;
				}
			}
			for (int x = j ; x <= n; x++) {
				for (int u = j; u <= x - 1; u++) {
					c[x] = a[x];
					if (c[u] == a[x]) {
						for (int t = u; t <= x - 1; t++) {
							c[t] = 0;
						}
						break;
					}
				}
			}
			for (int t = i; t <= n; t++) {
				//	if (f[c[t]] == 1)
				//	continue;
				cnt[c[t]] += 1;
				//	f[c[t]] = 1;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
}
