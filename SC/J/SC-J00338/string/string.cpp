#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;
		char c;
		cin >> c;
		for (int j = 1; j <= a; ++j) s += c;
	}
	string s2 = s;
	reverse(s2.begin(), s2.end());
	int ans = 0;
	int mid = s.length() / 2;
	for (int i = 0; i < mid; ++i) if(s[i] != s2[i]) ans++;
	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	solve();
	return 0;
}
