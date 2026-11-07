#include <bits/stdc++.h>
using namespace std;

int c1, c2;
bool f = 0, l = 0;
string s1, s2;

bool check() {
	if (s1[2] >= 'D' && s2[2] >= 'D')
		return 1;
	if (s1[2] < 'D' && s2[2] < 'D')
		return 1;
	return 0;
}

bool ok() {
	if (s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2])
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%d", &c1);
	cin >> s1;
	scanf("%d", &c2);
	cin >> s2;
//	1
	if (c1 == c2)
		printf("1");
	else {
		printf("0000");
		return 0;
	}
//	2
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		printf("1");
		f = 1;
	} else
		printf("0");
//	3
	if (f == 1 && check()) {
		printf("1");
		l = 1;
	} else
		printf("0");
//	4
	if (l == 1 && ok())
		printf("1");
	else
		printf("0");
	return 0;
}
