#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
int cur1, cur2;
bool flag = 1, l = 0, r = 0, same = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &c1);
	cin >> s1;
	scanf("%d", &c2);
	cin >> s2;
	if (c1 == c2) {
		printf("1");
		same = 1;
	} else {
		printf("0");
	}
	if (s1[1] == s2[1] && same == 1) {
		printf("1");
	} else {
		printf("0");
		flag = 0;
	}
	cur1 = s1[2];
	cur2 = s2[2];
	if (cur1 <= 'C' && cur2 <= 'C') {
		l = 1;
	}
	if (cur1 >= 'D' && cur2 >= 'D') {
		r = 1;
	}
	if ((l == 1 || r == 1) && flag == 1) {
		printf("1");
		if (r == 1) {
			printf("1");
		} else if (l == 1 && (cur1 == cur2 + 1 || cur2 == cur1 + 1)) {
			printf("1");
		} else {
			printf("0");
		}
	} else {
		printf("00");
	}
	return 0;
}
