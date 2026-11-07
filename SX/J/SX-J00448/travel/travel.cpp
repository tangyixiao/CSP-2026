#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
string n, m, n1, m1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << "1";
	else
		cout << "0";
	n = s1.substr(0, 2);
	m = s2.substr(0, 2);
	n1 = s1.substr(1, 1);
	m1 = s2.substr(1, 1);
	if (n == m)
		cout << "1";
	else
		cout << "0";
	if (n == m && (n <= 'C' && m <= 'C' || n >= 'C' && m >= 'C'))
		cout << 1;
	else
		cout << 0;
	if (n1 == char(m1 + 1) || n1 == char(m1 + 1) && char(m1 + 1) != 'D') {
		cout << '1';
	} else
		cout << 0;


	return 0;
}
