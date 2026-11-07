#include <bits/stdc++.h> 
#define int long long
using namespace std;
int n, m;
int a[1000005], ans[1000005];
stack<int> q;
stack<int> qq;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			q.push(a[j]);
			qq = q;
			while (!q.empty()) {
				q.pop();
				if (q.top() == a[i]) {
					break;
				}
			}
			q = qq;

		}
		while (!q.empty()) {
			ans[q.top()]++;
			q.pop();
		}
		q = qq;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
