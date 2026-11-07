#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1, c2, s1, s2;
bool a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		a = true;
	} else {
		printf("%s", "0000");
		return 0;
	}
	if (c2[0] + c2[1] == s2[0] + s2[1]) {
		b = true;
	} else {
		printf("%s", "1000");
		return 0;
	}
	if ((c2[2] == 'A' && s2[2] == 'C') || (c2[2] == 'C' && s2[2] == 'A') || (abs(c2[2] - s2[2]) && !(c2[2] == 'C'
	        && s2[2] == 'D'))) {
		c = true;
	} else {
		printf("%s", "1100");
		return 0;
	}
	if (c && abs(c2[2] - s2[2]) <= 1) {
		d = true;
	} else {
		printf("%s", "1110");
		return 0;
	}
	cout << 1111;
	return 0;
}