#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
string a = "0000";

int h(string s) {
	int n = 0;
	int k = s.size();
	for (int i = 0; i < k - 1; i++) {
		n = n * 10 + (s[i] - '0');
	}
	return n;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a[0] = '1';
		int x, r;
		x = h(s1);
		r = h(s2);
		if (x == r) {
			a[1] = '1';
			char x1 = s1[2], r1 = s2[2];
			if ((x1 <= 'C' && r1 <= 'C') || (x1 > 'C' && r1 > 'C')) {
				a[2] = '1';
				if (x1 + 1 == r1 || r1 + 1 == x1) {
					a[3] = '1';
				}
			}
		}
	}
	cout << a;
	return 0;
}
