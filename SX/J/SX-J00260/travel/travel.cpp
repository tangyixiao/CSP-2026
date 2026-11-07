#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	int a, b;
	cin >> c1 >> a >> s1 >> c2 >> b >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else if (a != b) {
		cout << "1000";
		return 0;
	} else if ((s1 <= "C" && s2 >= "D") || (s2 <= "C" && s1 >= "D")) {
		cout << "1100";
		return 0;
	} else if (s1 <= "C" && (s1 != "B" && s2 != "B")) {
		cout << "1110";
		return 0;
	} else {
		cout << "1111";
		return 0;
	}
}
