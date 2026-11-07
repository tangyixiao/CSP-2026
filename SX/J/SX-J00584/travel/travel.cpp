#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	bool f1, f2, f3, f4;
	f1 = f2 = f3 = f4 = 0;
	cin >> a >> b >> c >> d;
	if (a == c)
		f1 = 1;
	if (b[0] == d[0] and b[1] == d[1])
		f2 = f1;
	if (b[2] == 'D') {
		if (d[2] == 'F')
			f3 = f2;
	} else if (b[2] == 'F') {
		if (d[2] == 'D')
			f3 = f2;
	} else if (d[2] != 'F' and d[2] != 'D')
		f3 = f2;
	if (abs((int)d[2] - (int)b[2]) == 1)
		f4 = f3;
	cout << f1 << f2 << f3 << f4;
	return 0;
}
