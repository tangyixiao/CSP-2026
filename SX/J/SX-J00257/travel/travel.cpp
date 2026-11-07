#include <bits/stdc++.h>

bool near(char c1, char c2) {
	if (c1 > c2)
		std::swap(c1, c2);
	if (c2 == 'F')
		c2 = 'E';
	return (c2 - c1 == 1);
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	int c1, s1n, c2, s2n;
	char s1, s2;

	scanf("%d %d%c %d %d%c", &c1, &s1n, &s1, &c2, &s2n, &s2);
	if (c1 != c2) {
		printf("0000\n");
		return 0;
	} else {
		printf("1");
	}

	if (s1n != s2n) {
		printf("000\n");
		return 0;
	} else {
		printf("1");
	}

	if ((s1 <= 'C') != (s2 <= 'C')) {
		printf("00\n");
		return 0;
	} else {
		printf("1");
	}

	if (!near(s1, s2)) {
		printf ("0\n");
		return 0;
	} else {
		printf("1");
	}
	return 0;
}
