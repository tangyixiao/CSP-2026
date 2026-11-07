#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d;
char _b, _d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b >> _b >> c >> d >> _d;
	if (a == c)
		cout << 1;
	else
		cout << 0;
	if (b == d && _b != _d)
		cout << 1;
	else
		cout << 0;
	if (a == c && b == d) {
		if (_b == 'A' && _d == 'B')
			cout << 1;
		else if (_b == 'A' && _d == 'C')
			cout << 1;
		else if (_b == 'B' && _d == 'C')
			cout << 1;
		else if (_b == 'D' && _d == 'F')
			cout << 1;
		//_d
		else if (_d == 'A' && _b == 'B')
			cout << 1;
		else if (_d == 'A' && _b == 'C')
			cout << 1;
		else if (_d == 'B' && _b == 'C')
			cout << 1;
		else if (_d == 'D' && _b == 'F')
			cout << 1;
		//A
		else if (_b == 'A' && _d == 'D')
			cout << 0;
		else if (_b == 'A' && _d == 'F')
			cout << 0;
		//B
		else if (_b == 'B' && _d == 'D')
			cout << 0;
		else if (_b == 'B' && _d == 'F')
			cout << 0;
		//C
		else if (_b == 'C' && _d == 'D')
			cout << 0;
		else if (_b == 'C' && _d == 'F')
			cout << 0;
		//D
		else if (_b == 'D' && _d == 'A')
			cout << 0;
		else if (_b == 'D' && _d == 'B')
			cout << 0;
		else if (_b == 'D' && _d == 'C')
			cout << 0;
		//F
		else if (_b == 'F' && _d == 'A')
			cout << 0;
		else if (_b == 'F' && _d == 'B')
			cout << 0;
		else if (_b == 'F' && _d == 'C')
			cout << 0;
	} else
		cout << 0;
	if (a == c && b == d) {
		if (_b == 'A' && _d == 'B')
			cout << 1;
		else if (_b == 'B' && _d == 'C')
			cout << 1;
		else if (_b == 'B' && _d == 'A')
			cout << 1;
		else if (_b == 'C' && _d == 'B')
			cout << 1;
		else if (_b == 'D' && _d == 'F')
			cout << 1;
		else if (_b == 'F' && _d == 'D')
			cout << 1;
		else
			cout << 0;
	} else
		cout << 0;
	return 0;
}
