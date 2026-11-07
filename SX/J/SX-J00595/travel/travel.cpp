#include <bits/stdc++.h>
using namespace std;
int x, y, a, b;
char n, m;

bool check(char c, char s) {
	if (c > s)
		swap(c, s);
	if (c + 1 == s)
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x >> a >> n >> y >> b >> m;
	if (x == y)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (a == b)
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if ((n == 'C' && m == 'D') || (n == 'D' && m == 'C')) {
		cout << "00";
		return 0;
	}
	cout << "1";
	if (check(n, m))
		cout << "1";
	else
		cout << "0";
	return 0;
}
