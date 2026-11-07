#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a1, a2, b1, b2;
	char a, b;
	cin >> a1 >> a2 >> a >> b1 >> b2 >> b;
	if (a1 == b1) {
		cout << 1;
		if (a2 == b2) {
			cout << 1;
			if ((a >= 'A' && a <= 'C' && b >= 'A' && b <= 'C') || (a >= 'D' && a <= 'F' && b >= 'D' && b <= 'F')) {
				cout << 1;
				if (abs(a - b) <= 1)
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
}//02 01A 02 01B
