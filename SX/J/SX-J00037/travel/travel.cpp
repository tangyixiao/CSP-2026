#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	long long a = 0, b = 0;
	if (c1 != c2) {
		printf("0000");
		return 0;
	} else
		printf("1");
	if (( s1[0] == s2[0] ) && (s1[1] == s2[1]) )
		printf("1");
	else {
		printf("000");
		return 0;
	}
	a = s1[2] - 'A' + 1;
	b = s2[2] - 'A' + 1;
	if ((a <= 3 && b <= 3 ) || (a >= 4 && b >= 4))
		printf("1");
	else {
		printf("00");
		return 0;
	}
	if ((min(a, b) == 1 && max(a, b) == 2) || (min(a, b) == 2 && max(a, b) == 3 ) || (min(a, b) == 4 && max(a, b) == 6))
		printf("1");
	else
		printf("0");
	return 0;
}