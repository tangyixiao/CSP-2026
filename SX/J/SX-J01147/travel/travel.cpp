#include <bits/stdc++.h>
using namespace std;
#define int long long
string cr, sr, cx, sx;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cr >> sr >> cx >> sx;
	if (cr[0] != cx[0] || cr[1] != cx[1]) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	if (sr[0] != sx[0] || sr[1] != sx[1]) {
		cout << "000";
		return 0;
	}
	cout << 1;
	if (sr[2] <= 'C') {
		if (sx[2] >= 'D') {
			cout << "00";
			return 0;
		}
		cout << 1;
		if (sr[2] == 'B' || sx[2] == 'B')
			cout << 1;
		else
			cout << 0;
	} else {
		if (sr[2] >= 'D')
			cout << "11";
		else
			cout << "00";
	}
	return 0;
}
