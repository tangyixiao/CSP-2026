#include <bits/stdc++.h>
using namespace std;
long long n, a, m, p, w = 0, r;
string s, ss;

int main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m;
		a += m;
		cin >> s;
		for (int j = 1; j <= m; j++) {
			ss += s;
		}
	}
	r = a - 1;
	for (int i = 1; i <= a / 2; i++) {
		if (ss[w] != ss[r]) {
			p++;
		}
		w++;
		r--;
	}
	cout << p;
	return 0;
}