#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a[1] == c[1])
		cout << "1";
	else
		cout << "0";
	if (b[1] == d[1] && b[0] == d[0])
		cout << "1";
	else
		cout << "0";
	if (b[2] + 1 == d[2] || b[2] - 1 == d[2])
		cout << "1";
	else
		cout << "0";
	if (b[2] == 'C' && d[2] == 'D')
		cout << "0";
	else
		cout << "1";
	return 0;

}
