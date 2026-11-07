#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using db = double;
using ull = unsigned long long;
using cll = const long long;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	str c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	}
	else {
		cout << "0000";
		return 0;
	}
	ll xr, xx;
	xr = (s1[0] - '0') * 10 + (s1[1] - '0');
	xx = (s2[0] - '0') * 10 + (s2[1] - '0');
	char cr = s1[2], cx = s2[2];
	ll nr, nx;
	if (xr == xx) {
		cout << "1";
	}
	else {
		cout << "000";
		return 0;
	}
	if (cr == 'A') nr = 1;
	else if (cr == 'B') nr = 2;
	else if (cr == 'C') nr = 3;
	else if (cr == 'D') nr = 4;
	else nr = 5;
	if (cx == 'A') nx = 1;
	else if (cx == 'B') nx = 2;
	else if (cx == 'C') nx = 3;
	else if (cx == 'D') nx = 4;
	else nx = 5;
	if ((nx <= 3 && nr <= 3) || (nx >= 4 && nr >= 4)) {
		cout << "1";
		if (abs(nx - nr) == 1) cout << "1";
		else cout << "0";
	}
	else cout << "00";
	return 0;
}