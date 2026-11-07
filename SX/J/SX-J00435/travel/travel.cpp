#include <bits/stdc++.h>
using namespace std;
string s1, c1, s2, c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> c1 >> s2 >> c2;
	if (s1 == s2) {
		cout << 1;
		if (c1[0] == c2[0] && c1[1] == c2[1]) {
			cout << 1;
			if ((c1[2] <= 'C' && c2[2] <= 'C') || (c1[2] > 'C' && c2[2] > 'C')) {
				cout << 1;
				bool a = (c1[2] == 'A' && c2[2] == 'B');
				a |= (c1[2] == 'B' && c2[2] == 'A');
				a |= (c1[2] == 'B' && c2[2] == 'C');
				a |= (c1[2] == 'C' && c2[2] == 'B');
				a |= (c1[2] == 'D' && c2[2] == 'F');
				a |= (c1[2] == 'F' && c2[2] == 'D');
				cout << a + 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else {
		cout << "0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
