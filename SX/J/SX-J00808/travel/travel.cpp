#include <bits/stdc++.h>
using namespace std;
int n, m, n1, n2;
string st1, st2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d", &n);
	cin >> st1;
	scanf("%d", &m);
	cin >> st2;
	for (int i = 0; i <= 1; i++) {
		n1 *= 10;
		n2 *= 10;
		n1 += st1[i] - '0';
		n2 += st2[i] - '0';
	}
	if (n == m) {
		printf("1");
		if (n1 == n2) {
			printf("1");
			char c1 = st1[2], c2 = st2[2];
			if (c2 < c1) {
				char t = c1;
				c1 = c2;
				c2 = t;
			}
			if (((c1 == 'A' || c1 == 'B' || c1 == 'C') && (c2 == 'A' || c2 == 'B' || c2 == 'C')) || ((c1 == 'D' || c1 == 'E')
			        && (c2 == 'D' || c2 == 'E'))) {
				printf("1");
				if ((c1 == 'A' && c2 == 'B') || (c1 == 'B' && c2 == 'C') || (c1 == 'D' && c2 == 'E')) {
					printf("1");
				} else {
					printf("0");
				}
			} else {
				printf("00");
			}

		} else {
			printf("000");
		}
	}

	else {
		printf("0000");
	}

	//printf("%d %d %d %d", n, m, n1, n2);

	return 0;
}
