#include <bits/stdc++.h>
using namespace std;

struct noed {
	int a;
	char c;
};

int n;
vector<noed> zfc, zfc1, zfc2;
long long zfclen = 0;
long long zfclenyb = 0;
long long ans = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int a;
		char c;
		noed b;
		cin >> a >> c;
		b.a = a;
		b.c = c;
		zfc.push_back(b);
	}

	for (int i = 0; i < int(zfc.size()); ++i) {
		zfclen += zfc[i].a;
	}
	zfclenyb = zfclen / 2;
	{
		long long cd = 0, i = 0;
		while (1) {
			if (cd + zfc[i].a <= zfclenyb) {
				cd += zfc[i].a;
				zfc1.push_back(zfc[i]);
			} else {
				if (zfclenyb - cd == 0)
					break;
				noed a;
				a.a = zfclenyb - cd;
				a.c = zfc[i].c;
				zfc1.push_back(a);
				break;
			}
			++i;
		}
	}
	{
		long long cd = 0, i = 0;
		while (1) {
			if (cd + zfc[zfc.size() - i - 1].a <= zfclenyb) {
				cd += zfc[zfc.size() - i - 1].a;
				zfc2.push_back(zfc[zfc.size() - i - 1]);
			} else {
				if (zfclenyb - cd == 0)
					break;
				noed a;
				a.a = zfclenyb - cd;
				a.c = zfc[zfc.size() - i - 1].c;
				zfc2.push_back(a);
				break;
			}
			++i;
		}
	}
	while (zfc1.size() != 0) {
		noed a, b;
		a = zfc1[zfc1.size() - 1];
		b = zfc2[zfc2.size() - 1];
		if (a.c == b.c) {
			if (a.a > b.a) {
				zfc1[zfc1.size() - 1].a = a.a - b.a;
				zfc2.pop_back();
			}
			if (a.a < b.a) {
				zfc2[zfc2.size() - 1].a = b.a - a.a;
				zfc1.pop_back();
			}
			if (a.a == b.a) {
				zfc1.pop_back();
				zfc2.pop_back();
			}
		} else {
			if (a.a > b.a) {
				zfc1[zfc1.size() - 1].a = a.a - b.a;
				zfc2.pop_back();
				ans += b.a;
			}
			if (a.a < b.a) {
				zfc2[zfc2.size() - 1].a = b.a - a.a;
				zfc1.pop_back();
				ans += a.a;
			}
			if (a.a == b.a) {
				zfc1.pop_back();
				zfc2.pop_back();
				ans += a.a;
			}
		}
	}
	cout << ans;
	return 0;
}
