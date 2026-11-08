#include <bits/stdc++.h>
using namespace std;

char a[10], b[10], c[10], d[10];

inline bool check(char s, char t) {
	if (s > t)
		swap(s, t);
	return (s + 1 == t && s != 'C');
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%s%s%s%s", a + 1, b + 1, c + 1, d + 1);
	if (a[1] == c[1] && a[2] == c[2]) {
		printf("1");
		if (b[1] == d[1] && b[2] == d[2]) {
			printf("1");
			if ((b[3] <= 'C' && d[3] <= 'C') || ('C' < b[3] && 'C' < d[3])) {
				printf("1");
				if (check(b[3], d[3]))
					printf("1");
				else
					printf("0");
			}
			else
				printf("00");
		}
		else
			printf("000");
	}
	else
		printf("0000\n");
	return 0;
}
