#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int a, m, cnt = 0;
	string c;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		m += a;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	int r = m - 1, l = 0;
	while (l < r) {
		if (s[l] != s[r]) {
			cnt++;
			l++;
			r--;
		}
	}
	cout << cnt;
	return 0;
}
