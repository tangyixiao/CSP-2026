#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6+5;
string s, x, a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> s >> x >> a >> b;
	if (s == a) {
		cout << 1;
		if (x[0] == b[0] && x[1] == b[1]) {
			cout << 1;
			if ((x[2] == 'A' || x[2] == 'B' || x[2] == 'C') && (b[2] == 'A' || b[2] == 'B' || b[2] == 'C')) {
				cout << 1;
				if ((x[2] == 'A' && b[2] == 'B') || (x[2] == 'B' && b[2] == 'C'))
					cout << 1;
				else
					cout << 0;
			} else if ((x[2] == 'D' || x[2] == 'F') && (b[2] == 'D' || b[2] == 'F')) {
				cout << 1 << 1;
			} else
				cout << 0 << 0;
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}
