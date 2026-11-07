#include <bits/stdc++.h>
using namespace std;
int n, m;
int h[500010];
int a[300010];
int t[300010];
int jp[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	for (int i = 1; i <= n; i++) {
		int d = 0;
		memset(t, 0, sizeof(t));
		memset(jp, 0, sizeof(jp));
		for (int j = i; j <= n; j++) {
			d++;
			t[d] = h[j];
			if (jp[h[j]] > 0 && jp[h[j]] <= d && t[jp[h[j]]] == h[j]) {
				/*for (int l = jp[h[j]] + 1; l < d; l++) {
					jp[t[l]] = 0;
				}*/
				d = jp[h[j]];
			} else {
				jp[h[j]] = d;
			}
		}
		for (int j = 1; j <= d; j++) {
			a[t[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << a[i] << " ";
	}
	return 0;
}