#include <bits/stdc++.h>
using namespace std;
int rc, xc;
string rs, xs;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rs;
	cin >> xc >> xs;
	if (rc != xc) {
		cout << "0000";
		return 0;
	}
	if (rs[0] == xs[0] && rs[1] == xs[1]) {
		if (rs[2] >= 'A' && rs[2] <= 'C' && xs[2] >= 'A' && xs[2] <= 'C') {
			if (abs((int)(rs[2] - xs[2])) == 1) {
				cout << "1111";
				return 0;
			}
			cout << "1110";
			return 0;
		} else if (rs[2] == 'D' && xs[2] == 'F' || rs[2] == 'F' && xs[2] == 'D') {
			cout << "1111";
			return 0;
		}
		cout << "1100";
		return 0;
	} else {
		cout << "1000";
		return 0;
	}
	return 0;
}
