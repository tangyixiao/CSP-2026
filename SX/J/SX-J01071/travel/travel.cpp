#include <bits/stdc++.h>;
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a1, a2, b1, b2, d1 = "", d2 = "";
	char c1, c2;
	cin >> a1 >> b1 >> a2 >> b2;
	c1 = b1[2];
	c2 = b2[2];
	d1 += b1[0];
	d1 += b1[1];
	d2 += b2[0];
	d2 += b2[1];
	if (a1 == a2) {
		cout << 1;
		if (d1 == d2) {
			cout << 1;
			if (c1 >= 'A' && c1 <= 'C' && c2 >= 'A' && c2 <= 'C') {
				cout << 1;
				if (c1 == c2 + 1 || c2 == c1 + 1)
					cout << 1;
				else
					cout << 0;
			} else if (c1 >= 'D' && c1 <= 'F' && c2 >= 'D' && c2 <= 'F') {
				cout << 1;
				if (c1 == c2 + 1 || c2 == c1 + 1)
					cout << 1;
				else
					cout << 0;
			} else
				cout << 0 << 0;
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
//	cout << endl;
//	cout << a1 << " " << a2 << endl;
//	cout << c1 << " " << c2 << endl;
//	cout << d1 << " " << d2 << endl;
	return 0;
}

