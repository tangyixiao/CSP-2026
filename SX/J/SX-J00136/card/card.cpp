#include <bits/stdc++.h>
using namespace std;
int a[500030], b[300030], c[300030];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
		c[a[i]] = i;
	}
	b[a[n]] = n;
	for (int i = 1; i <= m; i++) {
		if (i == a[n])
			continue;
		int t = 0;
		for (int j = c[i] - 1; j >= 0; j--) {
			if (c[a[j]] >= c[i])
				break;
			t++;
		}
		b[i] += t;
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << " ";
	return 0;
}