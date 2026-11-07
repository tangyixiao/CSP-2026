#include <bits/stdc++.h>
#define int long long
#define fr(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	bool f1 = 0, f2 = 0, f3 = 0, f4 = 0, t = 0;
	string s1, s2, a, b;
	char c, d;
	cin >> c1 >> s1 >> c2 >> s2;
	fr(i, 0, 1) {
		a[i] = s1[i];
		b[i] = s2[i];
	}
	c = s1[2];
	d = s2[2];
	if ((c >= 'A' && c <= 'C' && d >= 'A' && d <= 'C') || (c >= 'D' && c <= 'F' && d >= 'D' && d <= 'F'))
		t = 1;
	if (c1 == c2)
		f1 = 1;
	if (a[0] == b[0] && a[1] == b[1])
		f2 = 1;
	if (a == b && t == 1)
		f3 = 1;
	if ((c  - '0' + 1 == d - '0' || c  - '0' - 1 == d - '0') || (c == 'D' && d == 'F') || (c == 'F' && d == 'D'))
		f4 = 1;
	if (f1 == 0) {
		cout << "0000";
		return 0;
	} else if (f2 == 0) {
		cout << "1000";
		return 0;
	} else if (f3 == 0) {
		cout << "1100";
		return 0;
	} else if (f4 == 0) {
		cout << "1110";
		return 0;
	} else {
		cout << "1111";
	}
	return 0;
}
