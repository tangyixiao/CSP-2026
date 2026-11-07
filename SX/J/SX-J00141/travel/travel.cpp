#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int r_c, x_c, r_s, x_s;
	bool cnt = 0;
	char xx, rr;
	cin >> r_c >> r_s >> rr;
	cin >> x_c >> x_s >> xx;

	if (r_c == x_c)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0 ;
		return 0;
	}

	if (r_s == x_s) {
		cout << 1 ;
		if ((rr >= 'A' && rr <= 'C') && (xx >= 'A' && xx <= 'C')) {
			cout << 1 ;
			cnt = 1;
		} else if ((rr == 'D' || rr == 'F') && (xx == 'D' || xx == 'F')) {
			cout << 1 ;
			cnt = 1;
		} else {
			cout << 0 << 0 ;
			return 0;
		}
	} else {
		cout << 0 << 0 << 0 ;
		return 0;
	}

	if (cnt == 1) {
		if (rr == 'A' && xx == 'B')
			cout << 1 ;
		else if (rr == 'B' && xx == 'C')
			cout << 1 ;
		else if (xx == 'A' && rr == 'B')
			cout << 1;
		else if (xx == 'B' && rr == 'C')
			cout << 1 ;
		else if (xx == 'D' && rr == 'F')
			cout << 1 ;
		else if (rr == 'D' && xx == 'F')
			cout << 1 ;
		else
			cout << 0 ;
	} else
		cout << 0 ;
	return 0;
}
