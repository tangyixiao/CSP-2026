#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5+5;
int n, t[N], a[N], ans[N], p, t1[N], cnt[N], m;

signed main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (n--) {
		for (int i = 1; i <= n; i++) {
			t[a[i]]++;
			if (t[a[i]] == 2) {
				p = i;
				t[a[i]]--;
			}
		}
		for (int i = p - 1; i <= n; i++) {
			t1[a[i]] = 1;
			cnt[t[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i];
	}
	return 0;
}
