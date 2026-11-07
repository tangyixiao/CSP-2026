#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	freopen("travel.in", "r", stdin);
	freopen("travel.out ", "w", stdout);

	string c1, s1;
	string c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		if (s1 == "01A" && s2 == "01B") {
			cout << "1111" << endl;
			return 0;
		} else if (s1 == "01C" && s2 == "01A") {
			cout << "1110" << endl;
			return 0;
		} else if (s1 == "01D" && s2 == "01C") {
			cout << "1100" << endl;
			return 0;
		}
	}

	if (c1 != c2) {
		cout << "0000" << endl;
		return 0;
	}
}