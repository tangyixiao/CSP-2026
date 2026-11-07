#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int maxn = -1e9;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
	}
	cout << maxn;
	return 0;
}