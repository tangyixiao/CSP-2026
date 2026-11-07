#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char c, d;
int a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i <= s1.size(); i++) {
		if (s1[i] >= '0' && s1[i] <= '9') {
			a *= 10;
			a += s1[i] - '0';
		} else {
			c = s1[i];
			break;
		}
	}
	for (int i = 1; i <= s2.size(); i++) {
		if (s2[i] >= '0' && s2[i] <= '9') {
			b *= 10;
			b += s2[i] - '0';
		} else {
			d = s2[i];
			break;
		}
	}
	if (a == b) {
		cout << 1;
		if (c == 'D' && d == 'F' || c == 'C' && d == 'B' || c == 'A' && d == 'B' || c == 'A' && d == 'C' || c == 'F'
		        && d == 'D' || c == 'B' && d == 'C' || c == 'B' && d == 'A' || c == 'C' && d == 'A') {
			cout << 1;
			if (c == 'D' && d == 'F' || c == 'C' && d == 'B' || c == 'A' && d == 'B' || c == 'F' && d == 'D' || c == 'B' && d == 'C'
			        || c == 'B' && d == 'A')
				cout << 1;
			else
				cout << 0;
		} else {
			cout << "00" ;
			return 0;
		}
	} else {
		cout << "000" ;
		return 0;
	}
	return 0;
}
