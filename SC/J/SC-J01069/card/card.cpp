#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005];
int ans[300005], la[300005];
int main() {
 	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		la[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++)
			j = la[a[j]], ans[a[j]]++;
	}
	for (int i = 1; i < m; i++)
		cout << ans[i] << " ";
	cout << ans[m];
	return 0;
}