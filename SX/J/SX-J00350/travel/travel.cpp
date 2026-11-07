#include <bits/stdc++.h>
using namespace std;
string xr, xx, sr, sx;
int hx, hr;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> xr >> sr >> xx >> sx;
	if (xr != xx) {
		cout << "0000";
		return 0;
	}
	hr = sr[0] * 10 + sr[1];
	hx = sx[0] * 10 + sx[1];
	if (hr != hx) {
		cout << 1000;
		return 0;
	}
	if ((sx[2] >= 'D' && sr[2] < 'D') || (sr[2] >= 'D' && sx[2] < 'D')) {
		cout << 1100;
		return 0;
	}
	if (sx[2] == 'B' || sr[2] == 'B' || sx[2] == 'D' || sr[2] == 'D') {
		cout << 1111;
	} else {
		cout << 1110;
	}


	return 0;
}
