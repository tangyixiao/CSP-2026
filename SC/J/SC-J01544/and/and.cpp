#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n, m;
int a[N];
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	if(m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
	}
	else if(m == 2) {
		int ans = LLONG_MIN;
		for(int i = 1; i <= n; i++) for(int j = i + 1; j <= n; j++) ans = max(ans, (a[i] & a[j]));
		cout << ans;
	}
	else if(m == n) {
		int ans = a[1];
		for(int i = 2; i <= n; i++) ans = (ans & a[i]);
		cout << ans;
	}
	else if(m == n - 1) {
		sort(a + 1, a + n + 1);
		if(a[1] == a[2]) {
			int ans = a[2];
			for(int i = 3; i <= n; i++) ans = (ans & a[i]);
			cout << ans;
		}
		else {
			int ans1 = a[2], ans2 = a[1];
			for(int i = 3; i <= n; i++) {
				ans1 = (ans1 & a[i]);
				ans2 = (ans2 & a[i]);
			}
			cout << max(ans1, ans2);
		}
	}
	else {
		sort(a + 1, a + n + 1);
		int cnt = 0;
		vector<int> v;
		for(int i = n; i >= 1; i--) {
			if(cnt == m) break;
			if(a[i] != a[i - 1] && cnt < m) {
				v.push_back(a[i]);
				cnt++;
			}
		}
		int ans = v[0];
//		cout << ans << '\n';
		for(int i = 1; i < (int)v.size(); i++) {
//		cout << v[i] << ' ';
			ans = (ans & v[i]);
		}
		cout << ans;
	}
	return 0;
}