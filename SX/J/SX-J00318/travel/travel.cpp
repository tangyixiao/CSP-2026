#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;

int main() {
	int a = 0, b = 0, c = 0, d = 0;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int lena = c1.size();
	int lenb = c2.size();
	int lenc = s1.size();
	int lend = s2.size();
	if (c1 == c2) {
		a = 1;
		if (s2 == s2)
			b = 1;
		cout << a << b << c << d;
	}
	if (c1 != c2)
		cout << "0000";
//	cout << "1100";

	return 0;
}
