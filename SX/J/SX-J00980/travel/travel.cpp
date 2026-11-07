#include <bits/stdc++.h>
using namespace std;
string a, b, x, y;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> x >> y;
	long long s1 = 0, s2 = 0;
	s1 = (a[0] - '0') * 10 + a[1] - '0';
	s2 = (x[0] - '0') * 10 + x[1] - '0';
	if (s1 == s2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	s1 = (b[0] - '0') * 10 + b[1] - '0';
	s2 = (y[0] - '0') * 10 + y[1] - '0';
	if (s1 == s2)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (b[2] == 'A' && y[2] == 'B' || b[2] == 'A' && y[2] == 'C' || b[2] == 'B' && y[2] == 'A' || b[2] == 'B'
	        && y[2] == 'C' ||  b[2] == 'C' && y[2] == 'A' ||  b[2] == 'C' && y[2] == 'B')
		cout << 1;
	else if (b[2] == 'D' && y[2] == 'F' || y[2] == 'D' && b[2] == 'F') {
		cout << "11";
		return 0;
	} else {
		cout << "00";
		return 0;
	}
	if (b[2] == 'A' && y[2] == 'B' || b[2] == 'B' && y[2] == 'C' || b[2] == 'C' && y[2] == 'B' || b[2] == 'B'
	        && y[2] == 'A')
		cout << 1;
	else
		cout <<  0;
	return 0;
}
//travel