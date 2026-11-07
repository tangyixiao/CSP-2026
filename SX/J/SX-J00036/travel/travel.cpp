#include <bits/stdc++.h>
using namespace std;
int a, b, n, m, t1, t2, t3, t4;
string c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> c >> b >> d;
	n = (c[0] - '0') * 10 + (c[1] - '0');
	m = (d[0] - '0') * 10 + (d[1] - '0');
	c = c[2];
	d = d[2];
	if (a == b) {
		t1 = 1;
		if (n == m) {
			t2 = 1;
			if (c == "A" && d == "B" || c == "B" && d == "A" || c == "C" && d == "A" || c == "A" && d == "C" || c == "B"
			        && d == "C" || c == "C" && d == "B" || c == "D" && d == "F" || c == "F" && d == "D")
				t3 = 1;
			if (c == "A" && d == "B" || c == "B" && d == "A" || c == "B" && d == "C" || c == "C" && d == "B" || c == "D"
			        && d == "F" || c == "F" && d == "D")
				t4 = 1;
		}
	}
	cout << t1 << t2 << t3 << t4;
	return 0;
}
