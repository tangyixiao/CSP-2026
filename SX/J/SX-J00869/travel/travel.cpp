#include <bits/stdc++.h>
using namespace std;

int c1, c2, s1, s2;
char m1, m2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	cin >> s1;
	cin >> m1;
	cin >> c2;
	cin >> s2;
	cin >> m2;
	int a = c1, b = c2;
	if (a == b) {
		printf("1");
		if (s1 == s2) {
			printf("1");
			if ((m1 == 'A' || m1 == 'B' || m1 == 'C') && (m2 == 'A' || m2 == 'B' || m2 == 'C')) {
				printf("1");
				if ((m1 == 'A' && m2 == 'B') || (m1 == 'B' && m2 == 'C') || (m1 == 'C' && m2 == 'B') || (m1 == 'B' && m2 == 'A')) {
					printf("1");
				} else
					printf("0");
			} else if ((m1 == 'D' || m1 == 'F') && (m2 == 'D' || m2 == 'F' )) {
				printf("11");
			} else
				printf("00");
		} else
			printf("000");
	} else
		printf("0000");
	return 0;
}
