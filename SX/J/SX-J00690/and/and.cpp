#include <bits/stdc++.h>
using namespace std;
int a[200010];
bool q[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	long long maxs = 0, id = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > maxs) {
			maxs = a[i];
			id = i;
		}
	}
	q[id] = 1;
	long long ans = maxs;
	for (int i = 2; i <= m; i++) {
		long long maxss = 0, idd = 0;
		for (int j = 1; j <= n; j++) {
			if ((ans & a[j]) > maxss && q[j] != 1) {
				maxss = (ans &a[j]);
				idd = j;
			}
		}
		q[idd] = 1;
		ans = maxss;
	}
	cout << ans;
	return 0;
}