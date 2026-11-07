#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

struct st {
	int p, l;
} a, b;
str jg, ax, az, bx, bz;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ax >> az >> bx >> bz;
	a.l = az[2] - 'A' + 1;
	a.p = az[0] - '0' * 10 + az[1] - '0';
	b.l = bz[2] - 'A' + 1;
	b.p = bz[0] - '0' * 10 + bz[1] - '0';
	if (ax == bx) {
		jg[0] = '1';
	} else {
		jg[0] = '0';
	}
	if (jg[0] == '1' && a.p == b.p) {
		jg[1] = '1';
	} else {
		jg[1] = '0';
	}
	if (jg[1] == '1' && ((a.l >= 1 && a.l <= 3 && b.l >= 1 && b.l <= 3) || (a.l >= 4 && a.l <= 5 && b.l >= 4
	                     && b.l <= 5))) {
		jg[2] = '1';
	} else {
		jg[2] = '0';
	}
	if (jg[2] == '1' && ((a.l + 1 == b.l) || (a.l - 1 == b.l))) {
		jg[3] = '1';
	} else {
		jg[3] = '0';
	}
	for (int i = 0; i <= 3; i++) {
		cout << jg[i];
	}
	return 0;
}
