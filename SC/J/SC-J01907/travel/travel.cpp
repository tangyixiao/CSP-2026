#include <bits/stdc++.h>

using namespace std;

char b1, b2;
int c1, c2;
string s1, s2;
int t[128];
bool a, b, c, d;

int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	b1 = s1.back(); s1.pop_back();
	b2 = s2.back(); s2.pop_back();

	if (c1 == c2) {
		a = 1;
		if (s1 == s2) {
			b = 1;
			t[b1]++, t[b2]++;
			if (t['A'] + t['B'] + t['C'] == 0 || t['D'] + t['F'] == 0) {
				c = 1;
				if (t['A'] + t['B'] == 2 || t['B'] + t['C'] == 2 || t['D'] + t['F'] == 2) {
					d = 1;
				}
			}
		}
	}

	cout << a << b << c << d;
	return 0;
}