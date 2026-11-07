#include <bits/stdc++.h>
using namespace std;

int a, b;
string c1, c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.ans", "w", stdout);
	cin >> a >> c1 >> b >> c2;
	if (a == 1 || a == 16) {
		printf("0000");
		return 0;
	}
	if (a == b) {
		printf("1");
		int x = (c1[0] - '0') * 10 + c1[1] - '0', y = (c2[0] - '0') * 10 + c2[1] - '0';
		if (x == y) {
			printf("1");
			x = c1[2] <= 'C' ? 0 : 1, y = c2[2] <= 'C' ? 0 : 1;
			if (x == y) {
				printf("1");
				if (abs(c1[2] - c2[2]) == 1)
					printf("1");
				else
					printf("0");
			} else
				printf("00");
		} else
			printf("000");
	} else
		printf("0000");
	return 0;
}
