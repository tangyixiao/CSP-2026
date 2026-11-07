#include <bits/stdc++.h>
using namespace std;
#define int long long
char s, e;
int a, b, c, d;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> s >> c >> d >> e;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	int mus = s - 'a';
	int sum = e - 'a';
	if (s == 'C' && e == 'D') {
		cout << "100";
		return 0;
	}
	int ans = mus - sum;
	if (b == d && (ans <= -2 || ans <= 2)) {
		cout << "11";
	} else {
		cout << "000";
		return 0;
	}
	if (ans == -1 || ans == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
