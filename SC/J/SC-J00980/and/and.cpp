#include <bits/stdc++.h>
#define int long long

using namespace std;

int m, n;
vector<int> a(200005, 0);

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	if (m == 1) {
		sort(a.begin(), a.begin() + n);
		cout << a[n - 1];
	}

	else if (m == 2) {
		int maxn = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				int now = (a[i] & a[j]);
				if (now > maxn) maxn = now;
			}
		}
		cout << maxn;
	}

	else if (m == n) {
		int ans = a[0];
		for (int i = 1; i < n; ++i) {
			ans = ans & a[i];
		}
		cout << ans;
	}

//	else if(m == n - 1){
//		int maxn = 0;
//		for(int i = 0; i < n; ++i) {
//			int now = a[0];
//			if(i == 0) now = a[1];
//			for(int j = 0; i < n; ++j) {
//				if(j == i) continue;
//				now = now & a[j];
//			}
//			maxn = max(maxn, now);
//		}
//	}

	else {
		cout << 0;
	}
}

signed main() {
	freopen("and1.in", "r", stdin);
	freopen("and.out", "w", stdout);
	solve();
}