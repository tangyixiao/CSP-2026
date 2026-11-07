#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200010], la, ra, cnt = 0;
char c[200010], lc, rc;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while (l < r) {
		if (la == 0) {
			l++;
			la = a[l];
			lc = c[l];
		}
		if (ra == 0) {
			r--;
			ra = a[r];
			rc = c[r];
		}
		if (la > ra) {
			if (lc == rc) {
				la -= ra;
				ra = 0;
			} else {
				la -= ra;
				cnt = cnt + ra;
				ra = 0;
			}
			//cout << la << ' ' << lc << ' ' << ra << ' ' << rc << ' ' << cnt << "\n";
		} else if (la == ra) {
			if (lc == rc) {
				la -= ra;
				ra = 0;
			} else {
				cnt = cnt + la;
				la -= ra;
				ra = 0;
			}
			//cout << la << ' ' << lc << ' ' << ra << ' ' << rc << ' ' << cnt << "\n";
		} else {
			if (lc == rc) {
				ra -= la;
				la = 0;
			} else {
				ra -= la;
				cnt = cnt + la;
				la = 0;
			}
			//cout << la << ' ' << lc << ' ' << ra << ' ' << rc << ' ' << cnt << "\n";
		}
		//cout << la << ' ' << lc << ' ' << ra << ' ' << rc << ' ' << cnt << "\n";
	}
	cout << cnt;
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/