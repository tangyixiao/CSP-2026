#include <bits/stdc++.h>
using namespace std;
//#define int long long
int n, mm, a[50005], ans[50005];
stack<int>s, st;
map<int, int>m;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> n >> mm;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int l = 1; l <= n; l++) {
		s = st;
		for (int i = l; i <= n; i++) {
			m[a[i]] = 0;
		}

		for (int i = l; i <= n; i++) {
			if (m[a[i]]) {
				while (!s.empty() && a[i] != s.top()) {
					m[a[i]] = 0;
					s.pop();
				}
				s.pop();
			} else
				m[a[i]] = 1;
			s.push(a[i]);
		}
		while (!s.empty()) {
			ans[s.top()]++;
			s.pop();
		}
	}
	for (int i = 1; i <= mm; i++)
		cout << ans[i] << ' ';
	return 0;
}
