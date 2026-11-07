#include <bits/stdc++.h>
using namespace std;
string c, s, cc, ss;
bool f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cc >> ss;
	if (c == cc) {
		cout << 1;
	} else {
		cout << 0;
		f = 1;
	}
	if (f == 0 && s[0] == ss[0] && s[1] == ss[1]) {
		cout << 1;
	} else {
		cout << 0;
		f = 1;
	}
	if ((f == 0) && (s[32] <= 67 && ss[2] <= 67) || (s[2] >= 68 && ss[2] >= 68)) {
		cout << 1;
	} else {
		cout << 0;
		f = 1;
	}
	if (f == 0&& abs(s[2] - ss[2]) == 1) {
		cout << 1;
	} else {
		cout << 0;
		f = 1;
	}
	return 0;
}