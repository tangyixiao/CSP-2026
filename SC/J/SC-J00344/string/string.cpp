#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, cnt, goal;
pair<int, char> a[200001];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
		goal += a[i].first;
	}
	int sum = 0;
	pair<int, int> l = {1, a[1].first}, r = {n, a[n].first};
	while(sum != goal && l < r) {
		if (l.second >= r.second) {
			sum += r.second * 2;
			if (a[l.first].second != a[r.first].second) cnt += r.second;
			l.second -= r.second;
			r.first--;
			r.second = a[r.first].first;
		} else {
			sum += l.second * 2;
			if (a[l.first].second != a[r.first].second) cnt += l.second;
			r.second -= l.second;
			l.first++;
			l.second = a[l.first].first;
		}
	}
	cout << cnt;
	return 0;
}