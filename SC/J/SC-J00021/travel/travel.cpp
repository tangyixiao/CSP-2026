#include<bits/stdc++.h>
using namespace std;
string a, aq, b, bq, z = {"0ABCDE"};
int asd(int p) {
	if (p > 0) {
		return p;
	} else return -p;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> aq >> b >> bq;
	if (a == b) {
		cout << 1;
		if (aq[0] == bq[0] && bq[1] == aq[1]) {
			cout << 1;
			int w = 0, e = 0;
			int x = -1, c = -1;
			for (int i = 1; i <= 5; i++) {
				if (aq[2] == z[i] || bq[2] == z[i]) {
					if (i <= 3) {
						w++;
					} else {
						e++;
					}
				}
				if (aq[2] == z[i]) {
					x = i;
				}
				if (bq[2] == z[i]) {
					c = i;
				}
			}
			int o = 0;
			if (w == 2 || e == 2) {
				cout << 1;
				if (asd(c - x) == 1) {
					o = 1;
					cout << 1;
				}
			} else cout << 0;
			if (o == 0) {
				cout << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else cout << 0 << 0 << 0 << 0;
	return 0;
}