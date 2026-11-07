#include <bits/stdc++.h>
using namespace std;
string s, c1, s1, c2, s2, a, b, e, f;
char c, d;
bool g, k, j;
int l;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < s1.size() - 1; i++) {
		a += s1[i];
	}
	for (int i = 0; i < s2.size() - 1; i++) {
		b += s2[i];
	}
	c = s1[2];
	d = s2[2];
	if (c >= 'A' && c <= 'C' && d >= 'A' && d <= 'C')
		l = 1;
	else if (c >= 'D' && c <= 'F' && d >= 'D' && d <= 'F')
		l = 2;
	else
		l = 0;
	if (c1 == c2) {
		s += "1";
		g = 1;
	} else {
		s += "0";
		g = 0;
	}

	if (g && a == b) {
		s += "1";
		j = 1;
	}

	else

	{
		s += "0";
		j = 0;
	}
	if (l && j)

	{
		s += "1";
		k = 1;
	} else

	{
		s += "0";
		k = 0;
	}
	if (l == 1 && k && int(abs(c - d)) == 1)
		s += "1";
	else if (l == 2 && k && int(abs(c - d)) == 2)
		s += "1";
	else
		s += "0";
	cout << s;
	return 0;
}
