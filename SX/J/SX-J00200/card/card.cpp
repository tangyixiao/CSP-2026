#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long b[1000005], d[1000005], c[1000005], t, ans[1000005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> b[i];
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (d[b[j]] == 0)
				c[++t] = b[j], d[b[j]] = 1;
			else {
				t--;
				for (int k = j - 1; k >= 1; k--) {
					if (d[b[k]] == d[b[j]])
						break;
					else
						t--, d[b[k]] = 0;
				}
			}
			d[b[j]] = 1;
		}
		for (int j = 1; j <= t; j++)
			if (c[j] <= m)
				ans[c[j]]++;
		for (int j = 1; j <= n; j++)
			d[b[j]] = 0;
		t = 0;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}