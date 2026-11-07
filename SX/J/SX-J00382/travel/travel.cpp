#include <bits/stdc++.h>
//#define int long long
using namespace std;
int a, b, c, z, x, v;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	z = s1[2] - 64;
	x = s2[2] - 64;
	if (a == b) {
		cout << 1;
	} else
		cout << 0;
	if (s1[0] == s2[0] && s1[1] == s2[1] && a == b) {
		cout << 1;
		if (z == 6 && x == 4 || x == 6 && z == 4 || z == 1 && x == 2 || z == 2 && x == 1 || z == 1 && x == 3 || z == 3
		        && x == 1 || z == 2 && x == 3 || z == 3 && x == 2) {
			c++;
			cout << 1;
		}
	} else
		cout << 0;
	if (c == 0) {
		cout << 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		if ( z == 6 && x == 4 || x == 6 && z == 4 || z == 1 && x == 2 || z == 2 && x == 1 || z == 2 && x == 3 || z == 3
		        && x == 2) {
			cout << 1;
			v++;
		}
	}
	if (v == 0) {
		cout << 0;
	}
	return 0;
}
