#include <bits/stdc++.h>
#define int long long
using namespace std;
int r, rr, x, xx;
char rrr, xxx;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r >> rr >> rrr >> x >> xx >> xxx;
	if (r == x) {
		cout << 1;
		if (rr == xx) {
			cout << 1;
			if (rrr == 'D' && xxx == 'F' || rrr == 'F' && xxx == 'D' || rrr == 'A' && xxx == 'B' || rrr == 'B' && xxx == 'A'
			        || rrr == 'A' && xxx == 'C' || rrr == 'C' && xxx == 'A' || rrr == 'B' && xxx == 'C' || rrr == 'C' && xxx == 'B' ) {
				cout << 1;
				if (rrr == 'D' && xxx == 'F' || rrr == 'F' && xxx == 'D' || rrr == 'A' && xxx == 'B' || rrr == 'B' && xxx == 'A'
				        || rrr == 'B' && xxx == 'C' || rrr == 'C' && xxx == 'B' )
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else {
		cout << "0000";
	}
	return 0;
}
