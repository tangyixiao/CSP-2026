#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10, M = 30;
int a[N], cnt[M];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m;
	cin >> n >> m;
	multiset<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	int ans = 0;
	for (int j = 29; j >= 0; j--) {
		vector<int> val;
		int cnt2 = 0;
		for (auto x : st) {
			if (x >> j & 1) {
				cnt2++;
			} else {
				val.push_back(x);
			}
		}
		if (cnt2 < m) {
			continue;
		}
		ans += (1 << j);
		for (auto x : val) {
			if (st.count(x)) {
				st.erase(x);
			}
		}
	}
	cout << ans << "\n";
	return 0;
}