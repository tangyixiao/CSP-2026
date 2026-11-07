#include <bits/stdc++.h>
using namespace std;
int n, m, a[1008611], s[1008611], ss[1008611], b, c;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	b = n;
	while (b--) {
		for (int i = n - b; i <= n; i++) {
			s[a[i]]++;
			if (s[a[i]] >= 2) {
				for (int j = 1; j <= m; j++)
					s[j] = 0;
				s[a[i]] = 1;
			}
		}
		for (int i = 1; i <= m; i++)
			if (s[i] == 1)
				ss[i]++;
		for (int i = 1; i <= m; i++)
			s[i] = 0;
	}
	for (int i = 1; i <= m; i++)
		if (ss[i] != 0)
			cout << ss[i] << " ";
	return 0;
}
