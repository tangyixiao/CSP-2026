#include <bits/stdc++.h>
using namespace std;
string r, f, r1, f1;
int s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> r >> r1 >> f >> f1;

	if (r == f)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}

	for (int i = 0; i < 2; i++) {
		if (r1[i] == f1[i]) {
			s++;
			continue;
		} else {
			cout << "000";
			return 0;
		}
	}
	if (s == 2)
		cout << "1";

	if ((r1[2] == 'F' or r1[2] == 'D') and (f1[2] == 'F' or f1[2] == 'D')) {
		cout << "1";

		char w = r1[2], w1 = f1[2];
		if (w + 2 == w1 or w - 2 == w1)
			cout << "1";
		else {
			cout << "0";
			return 0;
		}
	} else if ((r1[2] == 'A' or r1[2] == 'B' or r1[2] == 'C') and (f1[2] == 'A' or f1[2] == 'B' or f1[2] == 'C')) {
		cout << "1";

		char w = r1[2], w1 = f1[2];
		if (w + 1 == w1 or w - 1 == w1)
			cout << "1";
		else {
			cout << "0";
			return 0;
		}
	} else
		cout << "00";


	return 0;
}
