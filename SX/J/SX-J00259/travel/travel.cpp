#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

bool equal(const char &x, const char &y) {
	if (s1[2] == x && s2[2] == y)
		return 1;
	if (s1[2] == y && s2[2] == x)
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
		printf("0000");
	else if (s1[0] != s2[0] || s1[1] != s2[1])
		printf("1000");
	else if (s1[2] < 'D' && s2[2] > 'C' || s2[2] < 'D' && s1[2] > 'C')
		printf("1100");
	else if (equal('A', 'B') || equal('B', 'C') || equal('D', 'F'))
		printf("1111");
	else
		printf("1110");
}
