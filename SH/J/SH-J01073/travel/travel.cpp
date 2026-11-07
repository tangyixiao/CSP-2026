#include <stdio.h>

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	int c1, c2, c3, c4;
	char c2s[10], c4s[10];
	char c2c, c4c;

	scanf("%d%s%d%s", &c1, c2s, &c3, c4s);

	c2 = (c2s[0] - '0') * 10 + (c2s[1] - '0');
	c4 = (c4s[0] - '0') * 10 + (c4s[1] - '0');
	c2c = c2s[2];
	c4c = c4s[2];

	/* printf("%d %d %c %d %d %c\n", c1, c2, c2c, c3, c4, c4c); */

	if (c1 == c3) {
		printf("1");

		if (c2 == c4) {
			printf("1");

			if ((c2c <= 'C' && c4c <= 'C') || (c2c >= 'D' && c4c >= 'D')) {
				printf("1");

				if (c2c - c4c == 1 || c2c - c4c == -1) {
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
	} else {
		printf("0000");
	}

	printf("\n");

	return 0;
}
