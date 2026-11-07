#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m, a[500005], cnt[500005];

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int t = 1; t <= n; t++) {
		string s = "";
		for (int i = t; i <= n; i++) {
			if (s.find(to_string(a[i])) == string::npos) s = s + to_string(a[i]) + " ";
			else {
				s = s.substr(0, s.find(to_string(a[i])));
				s = s + to_string(a[i]) + " ";
			}
		}
		for (int i = 1; i <= m; i++) if (s.find(to_string(i)) != string::npos) cnt[i]++;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}