#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, x, y;
string s1, s2;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	x = s1[0] - '0';
	x *= 10;
	x += s1[1] - '0';
	y = s2[0] - '0';
	y *= 10;
	y += s2[1] - '0';
	if (a == b) {
		if (x == y) {
			if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
				ll m = s1[2] - 'A', n = s2[2] - 'A';
				if (abs(m - n) == 1 || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F'))
					cout << 1111;
				else
					cout << 1110;
			} else
				cout << 1100;
		} else
			cout << 1000;
	} else
		cout << "0000";
	return 0;
}