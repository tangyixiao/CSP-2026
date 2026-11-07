#include <bits/stdc++.h>
using namespace std;
int maxn[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, x;
	cin >> n >> m;
	int ok = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ok = 0;
		for (int j = 0; j < m; j++) {

			if (x > maxn[j] && !ok) {
				for (int k = 0; k < m ; k++) {

					maxn[j + m - k - 1] = maxn[j + m - k - 2];
				}
				maxn[j] = x;
				ok = 1;
			}

		}
	}
	cout << maxn[m - 1];
	return 0;

}
