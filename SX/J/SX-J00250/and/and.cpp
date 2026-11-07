#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int ss[1000001];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//使用上面这个的时候
	//不要用C语言的输入输出
	//不要用endl，换成"\n"
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (m == 1) {
		int maxv = INT_MIN;
		for (int i = 1; i <= n; i++) {
			int tmp;
			cin >> tmp;
			maxv = max(tmp, maxv);
		}
		cout << maxv;
		return 0;
	}
	if (m == n - 1) {
		int minv = INT_MAX;
		int xb;
		for (int i = 1; i <= n; i++) {
			cin >> ss[i];
			if (ss[i] < minv) {
				minv = ss[i];
				xb = i;
			}
		}
		int ans;
		if (xb == 1) {
			ans = ss[2];
			for (int i = 3; i <= n; i++) {
				ans = ans &ss[i];
			}
		} else {
			ans = ss[1];
			for (int i = 2; i <= n; i++) {
				if (xb == i) {
					continue;
				}
				ans = ans &ss[i];
			}
		}
		cout << ans;
	}
	return 0;
}