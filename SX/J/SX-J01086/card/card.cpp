#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10, M = 3e5 + 10;
int n, m, a[N], num[M], res[M];
deque <int> q;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		memset(num, 0, sizeof(num));
		for (int k = i; k <= n; k++) {
			if (!num[a[k]]) q.push_back(a[k]), num[a[k]]++;
			else {
				while (q.back() != a[k]) {
					num[q.back()]--;
					q.pop_back();
				}
			}
		}
		for (int i = 1; i <= m; i++) res[i] += num[i];
	}
	for (int i = 1; i <= m; i++) cout << res[i] << ' ';
	return 0;
}
