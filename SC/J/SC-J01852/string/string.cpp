#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

pair<int, char> a[200001];
int s[200001], p[200002];
int cnt;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
		s[i] = s[i - 1] + a[i].first;
	}
	for (int i = n; i >= 1; i--) {
		p[i] = p[i + 1] + a[i].first;
	}
	int l = 1, r = n, i = 0;
	while(l < r) {
		if (s[l] > i && p[r] > i) {
			int minn = min(s[l] - i, p[r] - i);
			i += minn;
			if (a[l].second != a[r].second) {
				cnt += minn;
			}
		}
		if (s[l] <= i) {
			l++;
		}
		if (p[r] <= i) {
			r--;
		}
	}
	cout << cnt;
	return 0;
}