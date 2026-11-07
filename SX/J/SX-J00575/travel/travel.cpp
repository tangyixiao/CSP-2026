#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2, l1, l2;

bool checkSame(char a, char b) {
	if (a == 'A' || a == 'B' || a == 'C')
		return b == 'A' || b == 'B' || b == 'C';
	else
		return b == 'D' || b == 'F';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;

	l1 += s1[0];
	l1 += s1[1];

	l2 += s2[0];
	l2 += s2[1];

	char n1 = s1[2], n2 = s2[2];

	if (c1 == c2)
		cout << 1;
	else
		cout << 0;

	if (c1 == c2 && l1 == l2)
		cout << 1;
	else
		cout << 0;


	char ma = (char) max((int) n1, (int) n2);
	char mi = (char) min((int) n1, (int) n2);

	if (c1 == c2 && l1 == l2 && checkSame(ma, mi))
		cout << 1;
	else
		cout << 0;


	if ((mi == 'A' && ma == 'B') || (mi == 'B' && ma == 'C') || (mi == 'D' && ma == 'F')) {
		if (c1 == c2 && l1 == l2 && checkSame(ma, mi))
			cout << 1;
		else
			cout << 0;
	}

	else {
		cout << 0;
	}

	return 0;
}
