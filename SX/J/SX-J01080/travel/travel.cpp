#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int a, b;
char r1, r2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a = (s1[0] - '0') * 10 + (s1[1] - '0');
		b = (s2[0] - '0') * 10 + (s2[1] - '0');
		if (a == b) {
			r1 = s1[2], r2 = s2[2];
			if ((r1 <= 'C' && r2 <= 'C') || (r1 >= 'D' && r2 >= 'D')) {
				if (r1 - r2 == 1 || r2 - r1 == 1) {
					cout << "1111";
				} else
					cout << "1110";
			} else
				cout << "1100";
		} else
			cout << "1000";
	} else
		cout << "0000";
	return 0;
}