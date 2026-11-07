#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, ans;
pair<int, char> st[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> st[i].first >> st[i].second;
	int l = 1, r = n;
	while (l < r) {
		if (st[l].second != st[r].second) {
			if (st[l].first >= st[r].first) {
				ans += st[r].first;
				st[l].first -= st[r].first;
				r--;
			} else {
				ans += st[l].first;
				st[r].first -= st[l].first;
				l++;
			}
		} else {
			if (st[l].first >= st[r].first) {
				st[l].first -= st[r].first;
				r--;
			} else {
				st[r].first -= st[l].first;
				l++;
			}
		}
	}
	cout << ans;
	return 0;
}
