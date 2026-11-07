#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll n;
ll ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		ll len = s.size();
		ll a;
		char ch;
		cin >> a >> ch;
		s.insert(len, a, ch);
	}
	ll l = 0, r = s.size() - 1;
	while (l <= r) {
		if (s[l] == s[r]) {
			l++;
			r--;
		} else {
			ans++;
			l++;
			r--;
		}
	}
	cout << ans;
	return 0;
}
