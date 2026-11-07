#include <bits/stdc++.h>
using namespace std;
char c1, c2;
int l, y;
float s1, s2;

int main() {
	freopen("travel.in", "r", "stdin");
	freopen("travel.out", "w", "stdout");
	scanf("%c", &c1);
	scanf("%d", &l);
	scanf("%f", &s1);
	scanf("%c", &c2);
	scanf("%d", &y);
	scanf("%f", &s2);
	if ('c1' == 'c2') {
		printf("%d", 1);
		if (l == y) {
			printf("%d", 1);
			if ('s1' <= 'C') {
				if ('s2' <= 'C') {
					printf("%d", 1);
					if ('s1' - 's2' == 1 || 's1' - 's2' == -1) {
						printf("%d", 1);
					} else {
						printf("%d", 0);
					}
				} else {
					printf("%d", 0);
				}
			}
			if ('s1' >= 'D') {
				if ('s2' >= 'D') {
					printf("%d", 1);
					if ('s1' - 's2' == 1 || 's1' - 's2' == -1) {
						printf("%d", 1);
					} else {
						printf("%d", 0);
					}
				} else {
					printf("%d", 0);
				}
			}
		} else {
			for (int i = 1; i <= 2; i++) {
				printf("%d", 0);
			}
		}
	} else {
		//cout << "\n" << c2[1] << " " << c2[2] << "\n";
		for (int i = 1; i <= 4; i++) {
			printf("%d", 0);
		}
	}
	return 0;
}