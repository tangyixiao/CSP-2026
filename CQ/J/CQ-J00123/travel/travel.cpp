#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
string c1, s1, c2, s2;
bool flag, flag2, flag3;
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string k1, k2;
	k1 = s1[0] + s1[1];
	k2 = s2[0] + s2[1];
	int a1, a2;
	a1 = s1[2] - 'A';
	a2 = s2[2] - 'A';
	if (c1 == c2) {
		flag = true;
		cout << 1;;
	} else {
		cout << 0;;
	}
	if (flag) {
		if (k1 == k2) {
			cout << 1;
			flag2 = true;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
//	cout << endl << a1 << " " << a2 << endl;
	if (flag && flag2) {
		if ((a1 < 3 && a2 < 3) || (a1 > 2 && a2 > 2)) {
			cout << 1;
			flag3 = true;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (flag && flag2 && flag3) {
		if (a1 - a2 == 1 || a2 - a1 == 1) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	return 0;
}
