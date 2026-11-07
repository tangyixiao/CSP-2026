#include <bits/stdc++.h>
using namespace std;
bool flag[100005];
int n, m, a[200005], id[100005], ans[100005], id1[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	int idid = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = i; j <= n; j++) {
			if (!flag[a[j]]) {
				flag[a[j]] = 1;
				id[a[j]] = ++idid;
				id1[idid] = a[j];
			} else {
				flag[a[j]] = 0;
				int x = id[a[i]] - 1;
				for (int k = id[a[j]]; k <= idid; k++) {
					flag[id1[k]] = 0;
					id[id1[k]] = 0, id1[k] = 0;
				}
				idid = x;
			}
		for (int j = 1; j <= idid; j++) {
			ans[id[j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}
