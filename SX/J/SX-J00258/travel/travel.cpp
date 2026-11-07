#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, o, p;
char a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d%d%c%d%d%c", &n, &x, &a, &m, &y, &b);
	if (n != m) {
		printf("0000");
		return 0;
	}
	printf("1");
	if (x != y) {
		printf("000");
		return 0;
	}
	printf("1");
	o = a - 64;
	o = min(o, 5);
	p = b - 64;
	p = min(p, 5);
	if ((o < 4 && p > 3) || (o > 3 && p < 4)) {
		printf("00");
		return 0;
	}
	printf("1");
	if (abs(o - p) != 1 || o + p == 7) {
		printf("0");
		return 0;
	}
	printf("1");
	return 0;
}
