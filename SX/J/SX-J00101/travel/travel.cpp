#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", "stdin");
	freopen("travel.out", "w", "stdout");
	char s1, s2;
	int c1, c2;
	cin >> c1 >> s1 >> c2 >> s2;
	int x1 = s1 - '0', x2 = s2 - '0';

	if (c1 == c2 && x1 - x2 == 0) {
		cout << "1100";
	} else if (c1 == c2 && x1 - x2 != 0 && x1 - x2 != 1 && x1 - x2 != -1) {
		cout << "1000";
	} else if (c1 == c2 && x1 - x2 == 1 && x1 - x2 == -1) {
		cout << "1111";
	} else if (c1 != c2) {
		cout << "0000";
	}
	return 0;
}



