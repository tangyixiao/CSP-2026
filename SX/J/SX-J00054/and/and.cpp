#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200005;
int n, m, a[N];
vector<int> t[100];

inline bool cmp(int x, int y) {
	return x > y;
}

inline void work(int x) {
	int cnt = 1;
	int xx = x;
	while (x) {
		if (x & 1)
			t[cnt].push_back(xx);
		x >>= 1;
		cnt++;
	}
}

signed main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	stable_sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		work(a[i]);
	}
	if (m == 1) {
		cout << a[1];
		return 0;
	}
	int num = log2(a[1]);
	for (int i = num + 1; i >= 1; i--) {
		int len = t[i].size();
		if (len >= m) {
			int ans = t[i][0];
			for (int j = 1; j < t[i].size(); j++) {
				ans = (ans &t[i][j]);
			}
			cout << ans;
			return 0;
		}
	}
	cout << 0;

	return 0;
}
