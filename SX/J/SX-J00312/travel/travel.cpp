#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int ap = (a[0] - '0') * 10 + a[1] - '0', al = (b[0] - '0') * 10 + b[1] - '0', bp = (c[0] - '0') * 10 + c[1] - '0',
	    bl = (d[0] - '0') * 10 + d[1] - '0';
	if (ap == bp)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (al == bl)
		cout << '1';
	else {
		cout << "000";
		return 0;
	}
	al = (b[2] == 'D' ? 'E' : b[2]) - 'A', bl = (d[2] == 'D' ? 'E' : d[2]) - 'A';
	if (max(al, bl) - min(al, bl) == 1)
		cout << "11";
	else if (max(al, bl) == 2 && min(al, bl) == 0)
		cout << "10";
	else
		cout << "00";
	return 0;
}
