#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		cout << 1;
		if (c2[0] + c2[1] == s2[0] + s2[1]) {
			cout << 1;
			if ((c2[2] >= 'A' and c2[2] <= 'C' and s2[2] >= 'A' and s2[2] <= 'C') or (c2[2] >= 'D' and c2[2] <= 'F'
			        and s2[2] >= 'D' and s2[2] <= 'F')) {
				cout << 1;
				if ((c2[2] >= 'A' and c2[2] <= 'B' and s2[2] >= 'A' and s2[2] <= 'B') or (c2[2] >= 'B' and c2[2] <= 'C'
				        and s2[2] >= 'B' and s2[2] <= 'C') or (c2[2] >= 'D' and c2[2] <= 'F' and s2[2] >= 'D' and s2[2] <= 'F'))
					cout << 1;
				else
					cout << 0;
			}

			else
				cout << "00";
		}

		else
			cout << "000";
	} else
		cout << "0000";



	return 0;
}
