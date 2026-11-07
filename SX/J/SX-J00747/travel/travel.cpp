#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
		if (b[0] == d[0] && ((b[1] >= 'A' && b[1] <= 'Z' && d[1] >= 'A' && d[1] <= 'Z') || b[1] == d[1])) {
			cout << 1;
			int x = b.size();
			if ((b[x - 1] <= 'C' && d[x - 1] <= 'C') || (b[x - 1] > 'C' && d[x - 1] > 'C')) {
				cout << 1;
				int xgm = abs(int(b[x - 1]) - int(d[x - 1]));
				if ((xgm == 1 && (!((b[x - 1] == 'C' && d[x - 1] == 'D') || (b[x - 1] == 'D' && d[x - 1] == 'C')))) || (xgm == 2
				        && ((b[x - 1] == 'D' && d[x - 1] == 'F') || (b[x - 1] == 'F' && d[x - 1] == 'D')))) {
					cout << 1;
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else
		cout << "0000";

	return 0;
}