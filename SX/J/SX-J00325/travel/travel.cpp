#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string c1, s1, c2, s2;
	for (int i = 0; i < 2; i++) {
		cin >> c1[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> s1[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> c2[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> s2[i];
	}
	bool a = false, b = false, c = false, d = false;
	if (c1[0] == c2[0] && c1[1] == c2[1])
		a = true;
	else
		a = false;
	if (a == true && s1[0] == s2[0] && s1[1] == s2[1])
		b = true;
	else
		b = false;
	if (b == true && s1[2] <= 'c' && s2[2] <= 'c')
		c = true;
	else
		c = false;
	if (c == true && abs(s1[2] - s2[2]) == 1)
		d = true;
	else
		d = false;
	cout << a << b << c << d;
	return 0;
}
