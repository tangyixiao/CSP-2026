#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl '\n'
using pi = pair<ll, ll>;
int T = 1;
string c1, c2, r1, r2;

void solve() {
	cin >> c1 >> c2 >> r1 >> r2;
	ll p1 = c2[0] - '0' + c2[1] - '0';
	ll p2 = r2[0] - '0' + r2[1] - '0';
	char c = c2[2], r = r2[2];
	if (c1 == r1) {
		cout << 1;
		if (p1 == p2) {
			cout << 1 ;
			if ((c <= 'C' && r <= 'C') || (c >= 'D' && r >= 'D')) {
				cout << 1;
				if (abs(c - r) == 1) {
					cout << 1;
				} else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//cin<<T;
	while (T--) {
		solve();
	}
	return 0;
}
