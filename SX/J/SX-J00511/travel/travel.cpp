#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
bool e, f, g, h;
string shc1, shc2, shc3, shc4, shc5, shc6;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	shc1 = a.substr(a.size() - 2, 2);
	shc2 = b.substr(b.size() - 3, 2);
	shc3 = c.substr(c.size() - 2, 2);
	shc4 = d.substr(b.size() - 3, 2);
	shc5 = b.substr(b.size() - 1, 1);
	shc6 = d.substr(b.size() - 1, 1);
	if (shc1 == shc3) {
		e = 1;
	} else {
		e = 0;
		f = 0;
		g = 0;
		h = 0;
	}
	if (shc2 == shc4 && e != 0) {
		f = 1;
	} else {
		f = 0;
		g = 0;
		h = 0;
	}
	if (((shc5 == "A" && (shc6 == "B" || shc6 == "C")) || (shc5 == "B" && (shc6 == "A" || shc6 == "C")) || (shc5 == "C"
	        && (shc6 == "B" || shc6 == "A")) || (shc5 == "D" && shc6 == "F") || (shc5 == "F" && shc6 == "D")) && f != 0) {
		g = 1;
	} else {
		g = 0;
		h = 0;
	}
	if (((shc5 == "A" && shc6 == "B") || (shc5 == "B" && shc6 == "A") || (shc5 == "B" && shc6 == "C") || (shc5 == "C"
	        && shc6 == "B") || (shc5 == "D" && shc6 == "F") || (shc5 == "F" && shc6 == "D")) && g != 0) {
		h = 1;
	}
	cout << e << f << g << h;

	return 0;
}
