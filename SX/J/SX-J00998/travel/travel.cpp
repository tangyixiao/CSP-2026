#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int z, x;
	string c, v;
	cin >> z >> c >> x >> v;
	if (z == x) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	bool bz = 0;
	for (int i = 0; i < 2; i++) {
		if (c[i] != v[i]) {
			cout << 0;
			bz = 1;
		}
	}
	if (bz == 0) {
		cout << 1;
	}
	if (c[2] >= 'A' && c[2] <= 'C' && v[2] >= 'A' && v[2] <= 'C' && bz == 0 || c[2] <= 'F' && c[2] >= 'D' && v[2] <= 'F'
	        && v[2] >= 'D' && bz == 0)
		cout << 1;
	else
		cout << 0;
	if (c[2] >= 'A' && c[2] <= 'C' && v[2] >= 'A' && v[2] <= 'C' && c[2] - 'A' + 1 == v[2] - 'A' || c[2] <= 'F'
	        && c[2] >= 'D' && v[2] <= 'F' && c[2] - 'A' == v[2] - 'A' + 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}