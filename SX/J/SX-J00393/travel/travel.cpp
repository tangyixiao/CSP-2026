#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10];
string c, s, c1, s1 ;
char b, l;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> c1 >> s1;
	for (ll i = 0; i < 2; i++) {
		if (c[i] == c1[i]) {
			a[0] = 1;

		} else if (c[i] != c1[i]) {
			a[0] = 0;
		}
	}
	if (a[0] == 0) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	for (ll i = 0; i < s.size() - 1; i++) {
		if (s[i] == s1[i]) {
			a[1] = 1;

		} else {
			a[1] = 0;

		}
	}
	b = s.size();
	l = s1.size();
	if (a[1] == 0) {
		cout << a[0] << 0 << 0 << 0;
		return 0;
	}
	if (b <= 'C' && l <= 'C') {
		a[2] = 1;
		if (b == 'A' && l == 'B')  {
			a[3] = 1;
		} else if (b == 'B' && l == 'A') {
			a[3] = 1;
		} else if (b == 'B' && l == 'C') {
			a[3] = 1;
		} else if (b == 'C' && l == 'B') {
			a[3] = 1;
		} else if (b == 'D' && l == 'F') {
			a[3] = 1;
		} else if (b == 'F' && l == 'D') {
			a[3] = 1;
		} else {
			a[3] = 0;
		}
	} else if (b >= 'D' && l >= 'D' ) {
		a[2] = 1;
		if (b == 'A' && l == 'B')  {
			a[3] = 1;
		} else if (b == 'B' && l == 'A') {
			a[3] = 1;
		} else if (b == 'B' && l == 'C') {
			a[3] = 1;
		} else if (b == 'C' && l == 'B') {
			a[3] = 1;
		} else if (b == 'D' && l == 'F') {
			a[3] = 1;
		} else if (b == 'F' && l == 'D') {
			a[3] = 1;
		} else {
			a[3] = 0;
		}
	} else if (b >= 'D' && l <= 'C') {
		a[2] = 0;
		a[3] = 0;
	} else if (b <= 'C' && l >= 'D') {
		a[2] = 0;
		a[3] = 0;
	}



	for (ll i = 0; i < 4; i++) {
		cout << a[i];
	}

}