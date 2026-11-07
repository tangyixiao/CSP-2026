#include <bits/stdc++.h>
using namespace std;
const int maxn = 500005;
const int maxm = 300005;
int n, m;
int a[maxn], g[maxm];
long long ans[maxm];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	memset(g, 0, sizeof(g));
	memset(ans, 0, sizeof(ans));
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (g[a[j]] != 0) {
				for (int k = g[a[j]]; k < j; k++) {
					g[a[k]] = 0;
				}
			}
			g[a[j]] = j;
		}
		for (int j = 1; j <= m; j++) {
			if (g[j] > 0) {
				ans[j]++;
				g[j] = 0;
			}
		}
	}
	
	
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	cout << '\n';
	return 0;
}


