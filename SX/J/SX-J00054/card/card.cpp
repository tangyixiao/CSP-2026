#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 500005;
const int M = 300005;
int n, m, a[N], t[M], ans[M];
queue<int> que1, que2;

signed main() {

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (t[a[j]]) {
				int fl = 0;
				while (!que1.empty()) {
					if (que1.front() == a[j] or fl) {
						t[que1.front()] = 0;
						que1.pop();
						fl = 1;
					} else {
						que2.push(que1.front());
						que1.pop();
					}
				}
				while (!que2.empty()) {
					que1.push(que2.front());
					que2.pop();
				}
			}
			que1.push(a[j]);
			t[a[j]] = 1;
		}
		while (!que1.empty()) {
			ans[que1.front()]++;
			que1.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}
