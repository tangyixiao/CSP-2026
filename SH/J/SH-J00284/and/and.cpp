#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[200010];
string s[200010];
string cal(int x) {
	string res = "";
	while (x > 0) {
		res = to_string(x % 2) + res;
		x /= 2;
	}
	return res;
}
int n, m;
int ans;
void dfs(int x, int cnt, int sum) {
	if (x == n + 1) {
		if (cnt == m) {
			ans = max(ans, sum);
		}
		return;
	}
	if (cnt > m || sum < ans) {
		return;
	}
	dfs(x + 1, cnt, sum);
	if (sum == 0) {
		dfs(x + 1, cnt + 1, a[x]);
	} else {
		dfs(x + 1, cnt + 1, sum & a[x]);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	cin >> n >> m;
	int maxn = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	bool flagB = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i] != i - 1) {
			flagB = 0;
			break;
		}
	}
	string ns = cal(n);
	for (int i = 1; i < ns.size(); i++) {
		if (ns[i] == '1') {
			flagB = 0;
			break;
		}
	}
	int len = cal(maxn).size();
	for (int i = 1; i <= n; i++) {
		string now = cal(a[i]);
		for (int j = now.size(); j < len; j++) {
			now = '0' + now;
		}
		s[i] = now;
	}
	if (n <= 20) {
		dfs(1, 0, 0);
		cout << ans;
	} else {
		if (m == 1) {
			cout << maxn;
		} else if (m == n) {
			int sum = a[1];
			for (int i = 2; i <= n; i++) {
				sum = sum & a[i];
			}
			cout << sum;
		} else if (m == 2) {
			for (int i = 1; i <= n; i++) {
				if (a[i] <= ans) {
					continue;
				}
				for (int j = 1; j <= n; j++) {
					if (i == j) {
						continue;
					}
					ans = max(ans, a[i] & a[j]);
				}
			}
			cout << ans;
		} else if (m == n - 1) {
			int sum = a[1];
			for (int i = 2; i <= n; i++) {
				sum = sum & a[i];
			}
			string t = cal(sum);
			for (int i = t.size(); i < len; i++) {
				t = '0' + t;
			}
			cout << t << endl;
			for (int i = 0; i < t.size(); i++) {
				if (t[i] == '0') {
					int cnt = 0, cntx = 0;
					for (int j = 1; j <= n; j++) {
						if (s[j][i] == '0') {
							cnt++;
							if (cntx == 0) {
								cntx = j;
							}
						}
					}
					if (cnt == 1) {
						for (int j = 1; j <= n; j++) {
							if (j != cntx) {
								if (ans == 0) {
									ans = a[j];
								} else {
									ans = ans & a[j];
								}
							} 
						}
					}
				}
			}
			cout << ans;
		} else if (maxn < 4) {
			int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
			for (int i = 1; i <= n; i++) {
				if (a[i] == 0) {
					cnt0++;
				}
				if (a[i] == 1) {
					cnt1++;
				}
				if (a[i] == 2) {
					cnt2++;
				}
				if (a[i] == 3) {
					cnt3++;
				}
			}
			if (m <= cnt3) {
				cout << 3;
			} else if (m <= cnt3 + cnt2) {
				cout << 2;
			} else if (m <= cnt3 + cnt2 + cnt1) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			sort(a + 1, a + n + 1);
			ans = a[n];
			int cnt = 1;
			for (int i = n - 1; i >= 0; i--) {
				ans = ans & a[i];
				cnt++;
				if (cnt == m) {
					break;
				}
			}
			cout << ans;
		}
	}
	return 0;
}
