#include <iostream>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int t1, t2;
	char a1, a2;
	a1 = s1[2], a2 = s2[2];
	t1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	t2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (c1 != c2) {
		cout << "0000" << endl;
	} else if (t1 != t2) {
		cout << "1000" << endl;
	} else if (a1 == 'D' && a2 != 'F' || a1 == 'F' && a2 != 'D' || a1 == 'A' && a2 != 'B' && a2 != 'C' || a1 == 'B'
	           && a2 != 'A' && a2 != 'C' || a1 == 'C' && a2 != 'A' && a2 != 'B') {
		cout << "1100" << endl;
	} else if (a1 == 'D' && a2 != 'F' || a1 == 'F' && a2 != 'D' || a1 == 'A' && a2 != 'B' || a1 == 'B' && a2 != 'A'
	           && a2 != 'C' || a1 == 'C' && a2 != 'B') {
		cout << "1110" << endl;
	} else {
		cout << "1111" << endl;
	}
	return 0;
}