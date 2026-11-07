#include <bits/stdc++.h>
using namespace std;
int n, m, a[1005], t[1006], l[1006];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		int tt = 0;
		memset(l, 0, sizeof(l));
		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= tt; k++) {
				if (l[k] == a[j]) {
					for (int o = k; o <= tt; o++)
						l[o] = 0;
				}
			}
			l[++tt] = a[j];
		}
		for (int j = 1; j <= n; j++)
			t[l[j]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << t[i] << ' ';
	return 0;
}
