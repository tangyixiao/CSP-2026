#include <bits/stdc++.h>
using namespace std;


long long n, ans, a;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++)
			s += c;
	}
	int len = s.size();
	for (int i = 0; i < len; i++) {
		if (s[i] != s[len - 1 - i])
			ans++, s[len - 1  - i] = s[i];
	}
	cout << ans;
	return 0;
}