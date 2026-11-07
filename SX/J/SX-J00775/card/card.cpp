#include <bits/stdc++.h>
using namespace std;
int p[300005], a[500005];
bool f[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			f[a[j]] = 1;
		}
		for (int j = 1; j <= m; j++) {
			if (f[j] == 1)
				p[j]++;
		}
		memset(f, 0, sizeof(f));
	}
	for (int i = 1; i <= m; i++) {
		cout << p[i] << " ";
	}
	return 0;
}