#include <bits/stdc++.h>
using namespace std;
#define int long long
string a, b;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 == c3)
		cout << 1;
	else
		cout << 0;
	for (int i = 0; i < c2.size() - 1; i++) {
		a += c2[i];
		b += c4[i];
	}
	if (a == b && c1 == c3)
		cout << 1;
	else
		cout << 0;
	char q = c2[2], w = c4[2];
	if (c1 == c3 && a == b && ((q == 'A' && w == 'B') || (q == 'A' && w == 'C') || (q == 'B' && w == 'A') || (q == 'B'
	                           && w == 'C') || (q == 'C' && w == 'A') || (q == 'C' && w == 'B') || (q == 'D' && w == 'F') || (q == 'F' && w == 'D')))
		cout << 1;
	else
		cout << 0;
	if (c1 == c3 && a == b && ((q == 'A' && w == 'B') || (q == 'B' && w == 'A') || (q == 'B' && w == 'C') || (q == 'C'
	                           && w == 'B') || (q == 'D' && w == 'F') || (q == 'F' && w == 'D')))
		cout << 1;
	else
		cout << 0;
	return 0;
}
