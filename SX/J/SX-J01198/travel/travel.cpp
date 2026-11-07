#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	string s, ss;
	cin >> m >> s >> n >> ss;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	if (m == n)
		a1 = 1;
	if (a1 == 1 && s[0] == ss[0] && s[1] == ss[1])
		a2 = 1;
	if (a2 == 1) {
		if (s[2] == 'A' || s[2] == 'B' || s[2] == 'C') {
			if (ss[2] == 'A' || ss[2] == 'B' || ss[2] == 'C')
				a3 = 1;
		} else if (ss[2] == 'D' || ss[2] == 'F')
			a3 = 1;
	}
	if (a3 == 1) {
		if (int(s[2]) == int(ss[2]) + 1 || int(s[2]) + 1 == int(ss[2]))
			a4 = 1;
	}
	cout << a1 << a2 << a3 << a4;
	return 0;
}
