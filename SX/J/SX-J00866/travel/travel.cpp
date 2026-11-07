#include <bits/stdc++.h>
// define int long long
using namespace std;
string c, s, cc, ss;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cc >> ss;
	if (c == cc)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i < 2; i++) {
		if (s[i] != ss[i]) {
			cout << "000";
			return 0;
		}
	}
	cout << "1";
	int a = abs((int)(s[2] - ss[2]));
	int b = (int)(s[2] - 'C');
	int d = (int)(ss[2] - 'C');
	if ((b <= 0 and d > 0) or (b > 0 and d <= 0)) {
		cout << "00";
		return 0;
	}
	cout << "1";
	if (a == 1)
		cout << "1";
	else
		cout << "0";
	return 0;
}
