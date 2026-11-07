#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, q, w;
string s, x;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> s >> m >> x;
	if (n == m) {
		cout << 1;
		char c = s[2], v = x[2];
		q = (s[0] - '0') * 10 + (s[1] - '0'), w = (x[0] - '0') * 10 + (x[1] - '0');
		if (q == w) {
			cout << 1;
			if ((c <= 'C' && v <= 'C' ) || (c >= 'D' && v >= 'D')) {
				cout << 1;
				if (abs(c - v) == 1 || (c == 'D' && v == 'F') || (c == 'F' && v == 'D'))
					cout << 1;
				else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
