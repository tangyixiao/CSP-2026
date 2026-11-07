#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string cr, sr, cx, sx;
	cin >> cr >> sr >> cx >> sx;
	if (cr != cx)
		cout << "0000";
	else {
		cout << 1;
		if (sr[0] != sx[0] || sr[1] != sx[1])
			cout << "000";
		else {
			cout << 1;
			if (!(('A' <= sr[2] && sr[2] <= 'C' && 'A' <= sx[2] && sx[2] <= 'C') || ('D' <= sr[2] && sr[2] <= 'F' && 'D' <= sx[2]
			        && sx[2] <= 'F')))
				cout << "00";
			else {
				cout << 1;
				if (!((sr[2] == 'A' && sx[2] == 'B') || (sr[2] == 'B' && sx[2] == 'C') || (sr[2] == 'D' && sx[2] == 'F')
				        || (sr[2] == 'B' && sx[2] == 'A') || (sr[2] == 'C' && sx[2] == 'B') || (sr[2] == 'F' && sx[2] == 'D')))
					cout << 0;
				else
					cout << 1;
			}
		}
	}
	return 0;
}