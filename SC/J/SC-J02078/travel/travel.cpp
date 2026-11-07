#define ll long long
#define _up(i, a, b, c) for (ll i = a; i <= b; i += c)
#define up(i, a, b) _up(i, a, b, 1)

#include <bits/stdc++.h>
using namespace std;
string s[5];
char c1, c2;

void init() {
	cin >> s[1] >> s[2] >> s[3] >> s[4];
}

void solve() {
	if (s[1] != s[3]) {
		cout << "0000";
	} else if (s[2].substr(0, 2) != s[4].substr(0, 2)) {
		cout << "1000";
	} else {
		c1 = s[2][2], c2 = s[4][2];
		
		if (c1 > c2) swap(c1, c2);
		if (!(('A' <= c1 && c1 <= 'C' && 'A' <= c2 && c2 <= 'C')
			|| ('D' <= c1 && c1 <= 'E' && 'D' <= c2 && c2 <= 'E'))) {
			cout << "1100";
		} else {
			if (c2 - c1 != 1) {
				cout << "1110";
			} else {
				cout << "1111";
			}
		}
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	init(), solve();
	return 0;
}