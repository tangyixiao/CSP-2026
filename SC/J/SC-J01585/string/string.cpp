#include<bits/stdc++.h>
using namespace std;
vector<pair<long long, char>> v;
inline long long mn(long long a, long long b) {
	return (a > b ? b : a);
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		v.emplace_back(a, c);
	}
	long long ans = 0;
	int l = 0, al = 0, r = n - 1, ar = 0;
	while (l < r) {
		long long val = v[l].first - al, var = v[r].first - ar;
		if (v[l].second == v[r].second) {
			al += mn(val, var);
			ar += mn(val, var);
		} else {
			al += mn(val, var);
			ar += mn(val, var);
			ans += mn(val, var);
		}
		if (al == v[l].first) l++, al = 0;
		if (ar == v[r].first) r--, ar = 0;
	}
	cout << ans;
}