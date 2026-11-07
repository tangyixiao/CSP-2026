#include <bits/stdc++.h>
using namespace std;
string a, b, x, y;

int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> x >> b >> y;
	if (a != b)
		cout << "0000";
	else {
		if (x[0] != y[0] || x[1] != y[1])
			cout << "1000";
		else {
			int l, r;
			if (x[2] == 'A' || x[2] == 'B' || x[2] == 'C')
				l = 1;
			else
				l = 0;
			if (y[2] == 'A' || y[2] == 'B' || y[2] == 'C')
				r = 1;
			else
				r = 0;
			if (l != r)
				cout << "1100";
			else {
				if (x[2] == 'F')
					x = x[0] + x[1] + 'E';
				if (y[2] == 'F')
					y = y[0] + y[1] + 'E';
				if (abs(x[2] - y[2]) != 1)
					cout << "1110";
				else
					cout << "1111";
			}
		}
	}
	return 0;
}
