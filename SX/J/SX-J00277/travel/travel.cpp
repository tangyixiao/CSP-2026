#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+5;
char rc1[N], rp1[N], rc2[N], rp2[N];

signed men() {
	scanf(" %s %s %s %s", rc1, rp1, rc2, rp2);
	bool check = true;
	int lenth = max(strlen(rc1), strlen(rc2));
	for (int i = 0; i < lenth; i++) {
		if (rc1[i] != rc2[i])
			check = false;
	}
	if (!check) {
		printf("0000\n");
		return 0;
	}
	check = true;
	lenth = max(strlen(rp1), strlen(rp2));
	for (int i = 0; i < lenth - 1; i++) {
		if (rp1[i] != rp2[i])
			check = false;
	}
	if (!check) {
		printf("1000\n");
		return 0;
	}
	char r1 = rp1[lenth - 1], r2 = rp2[lenth - 1];
	if (r1 >= 'a')
		r1 -= 'a' - 'A';
	if (r2 >= 'a')
		r2 -= 'a' - 'A';
	if ((r1 >= 'D' && r2 >= 'D')) {
		printf("1111\n");
		return 0;
	} else if (r1 <= 'C' && r2 <= 'C') {
		if (abs(r1 - r2) == 1) {
			printf("1111\n");
			return 0;
		} else {
			printf("1110\n");
			return 0;
		}
	} else {
		printf("1100\n");
		return 0;
	}
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	men();
	/*
	printf("%s %s %s %s", rc1, rc2, rp1, rp2);
	while (true);
	//*/
	return 0;
}
