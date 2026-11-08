#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;
int a[N];
int n, m;
int ans;
int cnt[61];
bool check(int x, int y) {
	for(int i = 30; i >= 0; i--) {
		if((x >> i) & 1) {
			if((y >> i) & 1) {

			} else return 0;
		}
	}
	return 1;
}
int solve(int x) {
	for(int i = 30; i >= 0; i--) {
		if((x >> i) & 1) return i;
	}
	return 0;
}
void work(int x) {
	for(int i = 30; i >= 0; i--) {
		if((x >> i) & 1) cnt[i]++;
	}
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int mx = 0;
	int mx2 = 0;
	int sum2 = 0;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		mx2 = max(mx2, a[i]);
		mx = max(mx, solve(a[i]));
		work(a[i]);
	}
	sum2 = a[1];
	for(int i = 2; i <= n; i++) {
		sum2 &= a[i];
	}
	if(m == 1) {
		cout << mx2 << '\n';
		return 0;
	}
	if(m == n) {
		cout << sum2 << '\n';
		return 0;
	}
	if(m == n - 1) {
		for(int i = 1; i <= n; i++) {
			int res = 0;
			for(int j = 31; j >= 0; j--) {
				int val = cnt[j] - ((a[i] >> j) & 1);
				if(val >= n - 1) {
					res += (1 << j);
				}
			}
			ans = max(ans, res);
		}
		cout << ans << '\n';
		return 0;
	}
	if(mx < 7 || n <= 20) {
		mx++;
		for(int i = (1 << mx); i >= 0; i--) {
			int res = 0;
			for(int j = 1; j <= n; j++) {
				if(check(i, a[j])) {
					res++;
				}
			}
			if(res >= m) {
				cout << i;
				return 0;
			}
		}
		return 0;
	}
	if(m == 2) {
//		cout <<"pass";
		ans = 0;
		for(int i = 1; i < n; i++) {
			for(int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << '\n';
		return 0;
	}
	for(int i = (1 << 16); i >= 0; i--) {
		int res = 0;
		for(int j = 1; j <= n; j++) {
			if(check(i, a[j])) {
				res++;
			}
		}
		if(res >= m) {
			cout << i;
			return 0;
		}
	}
//	dp[1] = a[1];
//	for(int i = 2; i <= n; i++) {
//		for(int j = m; j >= 1; j--) {
//			dp[j] = max(dp[j], dp[j - 1] & a[i]);
//		}
//	}
//	cout << dp[m] << '\n';
}
