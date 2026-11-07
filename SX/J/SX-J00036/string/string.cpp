#include <bits/stdc++.h>
using namespace std;
int n, m, si, cnt;
char c;
string s, p;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> c;
		while (m--) {
			s += c;
		}
	}
	p = s;
	reverse(p.begin(), p.end());
	si = s.size();
	for (int i = 0; i < si; i++) {
		if (s[i] != p[i])
			cnt++;
	}
	cout << cnt / 2;
	return 0;
}
