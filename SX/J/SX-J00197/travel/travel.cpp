#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	string s = "" + b[0];
	s += b[1];
	string x = "" + d[0];
	x += d[1];
	if (s == x)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((b[2] <= 'C' && d[2] <= 'C') || (b[2] >= 'D' && d[2] >= 'D'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	char mmax = max(b[2], d[2]);
	char mmin = min(b[2], d[2]);
	if (mmax == 'F' && mmax == 'D')
		cout << 1;
	else {
		if (mmax == mmin + 1)
			cout << 1;
		else
			cout << 0;
	}
	return 0;
}
