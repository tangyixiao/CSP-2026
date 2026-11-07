#include <bits/stdc++.h>
#define ll long long
using namespace std;
string rs, rss, xs, xss;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rs >> rss >> xs >> xss;
	if (rs == xs) {
		cout << "1";
		char q = rss[2], w = xss[2];
		if (rss[0] == xss[0] && rss[1] == xss[1]) {
			cout << "1";
			if ((q == 'A' && w != 'D' && w != 'F') || (q == 'B' && w != 'D' && w != 'F') || (q == 'C' && w != 'D' && w != 'F')
			        || (q == 'D' && w != 'A' && w != 'B' && w != 'C') || (q == 'F' && w != 'A' && w != 'B' && w != 'C')) {
				cout << "1";
				if (q + 1 == w || w + 1 == q || (w == 'D' && q == 'F') || (q == 'D' && w == 'F')) {
					cout << "1";
				} else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}