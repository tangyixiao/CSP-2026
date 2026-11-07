#include <bits/stdc++.h>
using namespace std;
char a, b, c, d, e, a2, b2, c2, d2, e2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d >> e >> a2 >> b2 >> c2 >> d2 >> e2;
	if (a == a2 && b == b2)
		printf("1");
	else {
		printf("0000");
		return 0;
	}
	if (c == c2 && d == d2)
		printf("1");
	else {
		printf("000");
		return 0;
	}
	if (e >= 'D' && e2 >= 'D') {
		printf("11");
		return 0;
	} else if (e <= 'C' && e2 <= 'C')
		printf("1");
	else {
		printf("00");
		return 0;
	}
	if (e == 'B' || e2 == 'B')
		printf("1");
	else
		printf("0");
	return 0;
}
