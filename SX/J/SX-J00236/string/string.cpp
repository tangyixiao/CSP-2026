#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
ll n, l, r, rr, a[N];
char c[N];

//string str(string s) {
//	string ss = "";
//	for (int i = s.size() - 1; i >= 0; i--) {
//		ss = s[i];
//	}
//	return ss;
//}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	string s, ss;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		ss += c[i];
		for (int j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	l = s.size();
	for (int i = 0; i < l / 2; i++) {
		if (s[i] != s[l - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}