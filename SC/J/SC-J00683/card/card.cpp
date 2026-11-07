#include <cstdio>
#include <cstring>
using namespace std;
int n, m;
int a[500005];
bool v[300005];
int ans[300005];
void solve() {
	for (int i = 1; i <= n; i++) {
		memset(v, 0, sizeof v);
		for (int j = i; j <= n; j++) {
			if (v[a[j]]) {
				for (int k = j - 1; k >= i; k--) {
					if (a[k] == a[j]) break;
					v[a[k]] = 0;
				}
			} else v[a[j]] = 1;
		}
		for (int j = 1; j <= m; j++) if (v[j]) ans[j]++;
	}
	for (int i = 1; i <= m; i++) printf("%d ", ans[i]);
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	if (m == 1) {
		printf("%d", n);
		return 0;
	} 
	if (n <= 5000) solve();
	else {
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[i - 1]) {
				int cnt = 1;
				while (i < n && a[i] == a[i + 1]) {
					i++;
					cnt++;
				}
				printf("%d ", cnt / 2);
			}
		}
	}
	return 0;
} 