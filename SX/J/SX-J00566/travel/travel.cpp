#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ta, tb, la, lb, ca, cb;
char ch[5];

bool check(int x, int y) {
	if (x <= 3 && y >= 4)
		return 0;
	if (y <= 3 && x >= 4)
		return 0;
	return 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[0] != 0)
		ta = (c1[0] - '0') * 10;
	if (c2[0] != 0)
		tb = (c2[0] - '0') * 10;
	ta = ta + c1[1] - '0';
	tb = tb + c2[1] - '0';
	if (s1[0] != '0')
		la = (s1[0] - '0') * 10;
	if (s2[0] != '0')
		lb = (s2[0] - '0') * 10;
	la = la + s1[1] - '0';
	lb = lb + s2[1] - '0';
	ca = s1[2] - 'A' + 1;
	cb = s2[2] - 'A' + 1;
	memset(ch, '0', sizeof(ch));
	if (ta == tb)
		ch[0] = '1';
	if (ta == tb && la == lb)
		ch[1] = '1';
	if (ta == tb && la == lb && check(ca, cb))
		ch[2] = '1';
	if (ta == tb && la == lb && check(ca, cb) && abs(ca - cb) == 1)
		ch[3] = '1';
	for (int i = 0; i < 4; i++) {
		cout << ch[i];
	}
	return 0;
}
