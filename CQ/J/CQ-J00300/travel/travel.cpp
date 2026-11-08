#include <bits/stdc++.h>
using namespace std;
string a, aa, b, bb;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> a >> aa >> b >> bb;
	if (a != b) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		if (aa.substr(0, 2) == bb.substr(0, 2)) {
			cout << 1;
		} else {
			cout << "000";
			return 0;
		}
		if (aa[2] <= 'C' && bb[2] <= 'C' || aa[2] > 'C' && bb[2] > 'C') {
			cout << 1;
		} else {
			cout << "00";
			return 0;
		}
		if (aa[2] + 1 == bb[2] || aa[2] - 1 == bb[2]) {
			cout << 1;
		} else {
			cout << "0";
			return 0;
		}
	}
	return 0;
}
