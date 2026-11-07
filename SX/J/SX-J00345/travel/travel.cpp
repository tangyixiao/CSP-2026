#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, c, d;
	char e, f;
	cin >> a >> b >> e >> c >> d >> f;
	if (a == c) {
		if (b == d) {
			if ((e == 'D' && f == 'F') || (e == 'F' && f == 'D')) {
				printf("1111");
			} else if ((e <= 'C' && e >= 'A') && (f <= 'C' && f >= 'A')) {
				if ((e == 'A' && f == 'B') || (e == 'B' && f == 'A') || (e == 'C' && f == 'B') || (e == 'B' && f == 'C')) {
					printf("1111");
				} else {
					printf("1110");
				}
			} else {
				printf("1100");
			}
		} else {
			printf("1000");
		}
	} else {
		printf("0000");
	}
	return 0;
}
