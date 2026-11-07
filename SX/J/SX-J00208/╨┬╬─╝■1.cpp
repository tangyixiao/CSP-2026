#include <bits/stdc++.h>
using namespace std;
int t, k, s, w, h, j;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a != c) {
		cout << "0000";
		return 0;
	}
	t = b[0] - '0';
	k = b[1] - '0';
	s = t * 10 + k;
	w = d[0] - '0';
	h = d[1] - '0';
	j = w * 10 + h;
	if (s != j) {
		cout << "1000";
		return 0;
	}
	if (b[2] == 'C' || d[2] == 'D' || b[2] == 'D' || d[2] == 'C') {
		cout << "1100";
		return 0;
	}
	if (b[2] - d[2] == -1 || b[2] - d[2] == 1 ) {
		cout << "1111";
		return 0;
	} else {
		cout << "1110";
	}
	return 0;
}
