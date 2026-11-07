#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel1.in", "r", stdin);
	freopen("travel1.out", "w", stdout);
	char s1[5], c1[5], s2[5], c2[5], ans[5], c, d;
	int a, b;
	scanf("%s %s %s %s", s1, c1, s2, c2);
	a = (s1[0] - '0') * 10 + s1[1] - '0';
	b = (s2[0] - '0') * 10 + s2[1] - '0';
	if (a == b) {
		ans[0] = '1';
	} else {
		ans[0] = '0';
		ans[1] = '0';
		ans[2] = '0';
		ans[3] = '0';
		printf("%s", ans);
		return 0;
	}
	a = (c1[0] - '0') * 10 + c1[1] - '0';
	b = (c2[0] - '0') * 10 + c2[1] - '0';
	if (a == b) {
		ans[1] = '1';
	} else {
		ans[1] = '0';
		ans[2] = '0';
		ans[3] = '0';
		printf("%s", ans);
		return 0;
	}
	c = c1[2];
	d = c2[2];
	if (c == 'D' || c == 'E' ) {
		if (d == 'A' || d == 'B' || d == 'C') {
			ans[2] = '0';
			ans[3] = '0';
			printf("%s", ans);
			return 0;
		}
		if (d == 'D' || d == 'E') {
			ans[2] = '1';
			ans[3] = '1';
			printf("%s", ans);
			return 0;
		}
	} else {
		if (d == 'D' || d == 'E') {
			ans[2] = '0';
			ans[3] = '0';
			printf("%s", ans);
			return 0;
		} else if (c == 'A' || c == 'C') {
			if (d == 'A' || d == 'C') {
				ans[2] = '1';
				ans[3] = '0';
				printf("%s", ans);
				return 0;
			}
		} else {
			ans[2] = '1';
			ans[3] = '1';
			printf("%s", ans);
			return 0;
		}
	}
	return 0;
}