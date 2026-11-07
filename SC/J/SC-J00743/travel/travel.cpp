#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("trevel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a = 0, b = 0, c = 0, d = 0;
	char s12 = s1[2], s23 = s2[2];
	int S1 = 0, S2 = 0, s = int(s12), ss = int(s23);
	if (c1 == c2) a = 1;
	else return cout << "0000", 0;
	string s11, s22;
	for (int i = 0; i <= 1; i++) s11 += s1[i], s22 += s2[i];
	if (s11 == s22) b = 1;
	if (b == 1) {
		if (s >= 65 && s <= 67) S1 = 1;
		else S1 = 2;
		if (ss >= 65 && ss <= 67) S2 = 1;
		else S2 = 2;
		if (S1 == S2) c = 1;
		if (c == 1) {
			if (s12 == 'A') {
				if (s23 == 'B') d = 1;
			} else if (s12 == 'B') {
				if (s23 == 'C') d = 1;
			} else if (s12 == 'C') {
				if (s23 == 'B') d = 1;
			} else if (s12 == 'D') {
				if (s23 == 'F') d = 1;
			} else if (s12 == 'F') {
				if (s23 == 'D') d = 1;
			}
		}
	}
//	if (a == 1 && b == 1 && c == 1) d = 1;
	cout << a << b << c << d;
	return 0;
}
