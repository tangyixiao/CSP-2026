#include <bits/stdc++.h>
using namespace std;
long long ans;
int a, cnt;
int n;
char c[200005];
map<int, int> m;
int f = 0;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c[i];
		m[i] = a;
		if (i >= 2) {
			if (c[i] != c[i - 1])
				f = 1;
		}
	}
	if (f == 0) {
		cout << 0;
		return 0;
	}
	f = 0;
	for (int i = 1; i * 2 <= n; i++) {
		int t = n - i + 1;
		if (f == 1) {
			if (m[t] >= cnt) {
				m[t] -= cnt;
				ans += cnt;
			} else {
				cnt -= m[t];
				ans += m[t];
				continue;
			}
		} else if (f == 2) {
			if (m[i] >= cnt) {
				m[i] -= cnt;
				ans += cnt;
			} else {
				cnt -= m[i];
				ans += m[i];
				continue;
			}
		}
		cnt = abs(m[i] - m[t]);
		f = 0;
		if (i == t - 1) {
			if (c[i] != c[t])
				ans += min(m[i], m[t]);
		} else if (c[i] == c[t]) {
			if (m[i] > m[t]) {
				if (m[t - 1] >= cnt) {
					m[t - 1] -= cnt;
					ans += cnt;
				} else {
					f = 1;
					cnt -= m[t - 1];
					m[t - 1] = 0;
					c[t - 1] = c[t];
					ans += m[t - 1];
				}
			} else if (m[i] == m[t])
				ans += m[i];
			else {
				if (m[i + 1] >= cnt) {
					m[i + 1] -= cnt;
					ans += cnt;
				} else {
					f = 2;
					cnt -= m[i + 1];
					m[i + 1] = 0;
					c[i] = c[t];
					ans += m[i + 1];
				}
			}
		} else {
			c[i] = c[t];
			if (m[i] > m[t]) {
				if (m[t - 1] >= cnt) {
					m[t - 1] -= cnt;
					ans += m[t] + cnt;
				} else {
					f = 1;
					cnt -= m[t - 1];
					m[t - 1] = 0;
					c[t - 1] = c[t];
					ans += m[t] + m[t - 1];
				}
			} else if (m[i] == m[t])
				ans += m[i];
			else {
				if (m[i + 1] >= cnt) {
					m[i + 1] -= cnt;
					ans += m[i] + cnt;
				} else {
					f = 2;
					cnt -= m[i + 1];
					m[i + 1] = 0;
					c[i] = c[t];
					ans += m[i] + m[i + 1];
				}
			}
		}
	}
	cout << ans;

	return 0;
}
