#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1 = 0, c2 = 0;
	char s1[10] = {0}, s2[10] = {0};
	cin >> c1 >> s1 >> c2 >> s2;
	bool a = (c1 == c2) && ((s1[0] == s2[0]) && (s1[1] == s2[1])),
	     b = a&&((((s1[2] - 'A' > -1) && ((s1[2] - 'A' < 3))) && ((s2[2] - 'A' > -1)) && ((s2[2] - 'A' < 3)))
	             || (((s1[2] - 'A' > 2)) && ((s2[2] - 'A' > 2)))), c = b&&(abs(s1[2] - s2[2]) == 1);
	cout << (c1 == c2) << a << b << c;
	return 0;
}
