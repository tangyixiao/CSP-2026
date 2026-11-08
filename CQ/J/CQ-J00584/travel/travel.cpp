#include <bits/stdc++.h>
using namespace std;

string a, b, c, d;

int get(char x) {
	if (x == 'F' || x == 'D') return 1;
	return 0;
}

int check(char x, char y) {
	if (x > y) swap(x, y);
	if (x == 'A' && y == 'B') return 1;
	if (x == 'B' && y == 'C') return 1;
	if (x == 'D' && y == 'F') return 1;
	return 0;
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> a >> b >> c >> d;
	int flag = 1;
	if (flag && a == c) cout << 1;
	else flag = 0, cout << 0;
	if (flag && b[0] == d[0] && b[1] == d[1]) cout << 1;
	else flag = 0, cout << 0;
	if (flag && get(b[2]) == get(d[2])) cout << 1;
	else flag = 0, cout << 0;
	if (flag && check(b[2], d[2])) cout << 1;
	else cout << 0;
	return 0;
}
