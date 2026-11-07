#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	
	vector<char > s;
	
	for (ll i = 1; i <= n; ++i) {
		ll t;
		char c;
		cin >> t >> c;
		for (ll j = 1; j <= t; ++j) {
			s.push_back(c);
		}
	}
	
	ll ls = s.size() - 1;
	
	ll mid = ls / 2;
	
	ll ans = 0;
	for (ll i = mid + 1; i <= ls; ++i) {
		if (s[i] != s[mid - (i - mid)]) {
			++ans;
		}
	}
	
	cout << ans << '\n';
	
	return 0;
}