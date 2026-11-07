#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long a[200005];

long long xxx(long long aa, long long bb) {
	long long ans = 0;
	string a1 = "", b1 = "";
	while (aa > 0) {
		if (aa % 2 == 0)
			a1 += '0';
		else if (aa % 2 == 1)
			a1 += '1';
		aa /= 2;
	}
	while (bb > 0) {
		if (bb % 2 == 0)
			b1 += '0';
		else if (bb % 2 == 1)
			b1 += '1';
		bb /= 2;
	}
	string a2 = "", b2 = "", cc = "";
	int aa1 = a1.size(), bb1 = b1.size(), x1 = 0, x2 = 0;
	while (aa1 > 0) {
		a2[x1] = a1[aa1];
		aa1--;
		x1++;
	}
	while (bb1 > 0) {
		b2[x2] = b1[bb1];
		bb1--;
		x2++;
	}
	for (long long i = 0; i < max(aa1, bb1); i++) {
		if (i > aa1) {
			cc += char(int(b2[i]) & 0);
		} else if (i > bb1) {
			cc += char(int(a2[i] ) & 0);
		} else {
			cc += char(int(a2[i]) & int(b2[i]));
		}
	}
	for (long long i = 0; i < cc.size(); i++) {
		ans = ans + int(cc[cc.size() - i] - '0') * pow(2, i);
	}
	return ans;
}

bool cmp(long long aaaa, long long bbbb) {
	return aaaa > bbbb;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	long long qq = xxx(a[0], a[1]);
	long long q = 2;
	while (q <= m) {
		qq = xxx(qq, a[q]);
		q++;
	}
	cout << qq << endl;
	return 0;
}
