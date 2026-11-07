#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n, x;
	bool f = 1, f1 = 1, f2 = 1, f3 = 1;
	string n1, x1;
	cin >> n >> n1 >> x >> x1;
	if (n == x)
		cout << 1;
	else {
		f = 0;
		cout << 0;
	}
	if (f && n1[0]  == x1[0]  && n1[1] == x1[1])
		cout << 1;
	else {
		f1 = 0;
		cout << 0;
	}
	if (f1 && n1[2] - '0' <= 'C' - '0' && x1[2] - '0' <= 'C' - '0' || n1[2] - '0' >= 'D' - '0' && x1[2] - '0' >= 'D' - '0')
		cout << 1;
	else {
		cout << 0;
		f2 = 0;
	}
	if (f2 && abs((n1[2] - '0') - (x1[2] - '0') ) == 1 && n1[2] != 'C' && x1[2] != 'D')
		cout << 1;
	else
		cout << 0;
	return 0;
}
