#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int x1, x2;
	string yy1, y2;
	cin >> x1 >> yy1 >> x2 >> y2;
	if (x1 == x2) {
		cout << 1; 
		
		if (yy1[0] == y2[0] && yy1[1] == y2[1]) {
			cout << 1;
			if ((yy1[2] == 'D' && y2[2] == 'F') || (yy1[2] == 'F' && y2[2] == 'D')) {
				cout << 11;
			} else {
				if ((yy1[2] == 'A' && y2[2] == 'B') || (yy1[2] == 'B' && y2[2] == 'A') || (yy1[2] == 'C' && y2[2] == 'A') || (yy1[2] == 'A' && y2[2] == 'C')  || (yy1[2] == 'C' && y2[2] == 'B') || (yy1[2] == 'B' && y2[2] == 'C')) {
					cout << 1;
					if (yy1[2] + 1 == y2[2] || yy1[2] - 1 == y2[2]) {
						cout << 1;
					} else cout << 0;
				} else cout << "00";
			}
		} else cout << "000";
	} else cout << "0000";
	return 0;
}