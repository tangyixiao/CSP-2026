#include <bits/stdc++.h>
using namespace std;
#define N 1010
#define endl '\n'
#define int long long

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, ans = 0;
	char c;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	int j = s.size() - 1;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[j]) {
			ans++;
		}
		j--;
	}
	cout << ans;
	return 0;
}