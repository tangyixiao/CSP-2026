#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
deque<pair<char, int>> q;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char c; int x;
		cin >> x >> c;
		q.push_back({c, x});
	}
	ll ans = 0;
	while (!q.empty()) {
		if (q.size() == 1) break;
		pair<char, int> t1 = q.front(), t2 = q.back();
		q.pop_back(); q.pop_front();
		if (t1.first == t2.first) {
			if (t1.second > t2.second) {
				t1.second -= t2.second;
				q.push_front(t1);
			} else if (t1.second < t2.second) {
				t2.second -= t1.second;
				q.push_back(t2);
			}
		} else {
			ans += min(t1.second, t2.second);
			if (t1.second > t2.second) {
				t1.second -= t2.second;
				q.push_front(t1);
			} else if (t1.second < t2.second) {
				t2.second -= t1.second;
				q.push_back(t2);
			}
		}
	} 
	cout << ans << '\n';
	return 0;
}


