#include <bits/stdc++.h>
using namespace std;
string s, ci;
long long n, m, sum, cnt;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> ci;
		for (int j = 1; j <= m; j++) {
			s += ci;
		}
	}
	cnt = s.size();
	for (int i = 0; i  <= cnt; i++) {
		if (s[i] - '0' != s[cnt - i - 1] - '0') {
			sum++;
		}
	}
	cout << sum / 2;
	return 0;
}