#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], r[35], b, lst, ans;
vector<int> p[35];
queue<int> q;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q.push(i);
	}
	lst = 30;
	while (1) {
		for (int k = 0; k < 30; k++) {
			vector<int>().swap(p[k]);
		}
		memset(r, 0, sizeof(r));
		while (!q.empty()) {
			int i = q.front();
			q.pop();
			for (int k = 0; k < 30; k++) {
				if (a[i] & (1 << k)) {
					p[k].push_back(i);
					++r[k];
				}
			}
		}
		b = 31;
		for (int k = lst - 1; k >= 0; k--) {
			if (r[k] >= m) {
				b = k;
				break;
			}
		}
		if (b == 31) break;
		for (int i = 0; i < r[b]; i++) {
			q.push(p[b][i]);
		}
		ans |= (1 << b);
		lst = b;
	}
	cout << ans;
	return 0;
}
