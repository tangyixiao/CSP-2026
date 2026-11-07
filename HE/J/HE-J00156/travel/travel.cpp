#include <bits/stdc++.h>
using namespace std;

char c1[10], c2[10], s1[10], s2[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%s%s%s%s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);

	bool flag = true;
	if (c1[1] == c2[1] && c1[2] == c2[2]) {
		printf("1");
	} else {
		printf("0");
		flag = false;
	}
	
	if (s1[1] == s2[1] && s1[2] == s2[2] && flag) {
		printf("1");
	} else {
		printf("0");
		flag = false;
	}
	
	if (flag && ((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] >= 'D' && s2[3] >= 'D'))) {
		printf("1");
	} else {
		printf("0");
		flag = false;
	}
	
	int x = s1[3] - 'A', y = s2[3] - 'A';
	if (abs(x - y) == 1 && flag) {
		printf("1");
	} else {
		printf("0");
	}
	return 0; 
}
