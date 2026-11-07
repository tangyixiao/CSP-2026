#include <bits/stdc++.h>
using namespace std;
char a[5], aa[5], b[5], bb[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> aa >> b >> bb;
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (aa[0] == bb[0] && aa[1] == bb[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((aa[2] < 'D' && bb[2] < 'D') || (aa[2] > 'C' && bb[2] > 'C')) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((aa[2] = bb[2] + '1' ) || (aa[2] = bb[2] - '1')) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
