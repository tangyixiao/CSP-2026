#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
		cout << "0000";
	else {
		cout << "1";
		string a = "", b = "";
		a += s1[0];
		a += s1[1];
		b += s2[0];
		b += s2[1];
		if (a != b)
			cout << "000";
		else {
			cout << "1";
			char x, y;
			x = s1[2];
			y = s2[2];
			if ((x <= 'C' && y > 'C')
			        || (y <= 'C' && x > 'C') )
				cout << "00";
			else {
				cout << "1";
				if (x > 'C')
					cout << "1";
				else {
					int e;
					if (x > y)
						e = x - y;
					else
						e = y - x;
					if (e != 1)
						cout << "0";
					else
						cout << "1";
				}

			}
		}
	}
	return 0;
}