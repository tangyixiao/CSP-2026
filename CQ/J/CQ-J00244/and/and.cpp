#include <bits/stdc++.h>
using namespace std;

#define DEBUG
#define LOCAL

typedef long long int ll;
int bit[35];

inline void solve() {
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		for (int j = 0; j < 30; j ++) {
			if (a[i] & (1 << j)) bit[j] ++;
		}
	}
	
	vector<int> need;
	
	int ans = 0;
	
	for (int i = 30; i >= 0; i --) {
		if (bit[i] < m) continue;
		int ok = 0;
		for (int j = 1; j <= n; j ++) {
			bool flag = 1;
			if (!(a[j] & (1 << i))) continue;
			for (int k : need) {
				if (!(a[j] & (1 << k))) {
					flag = 0;
					break;
				}
			}
			
			if (flag) ok ++;
		}
		
		if (ok >= m) {
			need.push_back(i);
			ans += (1 << i);
		}
	}
	
	cout << ans;
}

int main(int argc, const char* argv[]) {
#ifdef LOCAL
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t = 1;
//	cin >> t;

	while (t --) {
		solve();
	}

	return 0;
}
