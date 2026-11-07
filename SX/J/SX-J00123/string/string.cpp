#include <bits/stdc++.h>
using namespace std;

struct ss {
	int ai, s1;
	char ci;

} m[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, n1 = 0, nn;
	cin >> n;
	nn = n;
	long long d = 0, zfs = 0, cs;
	while (n--) {

		long long a;
		char c;
		cin >> a;
		cin >> c;
		m[n1].ai = a;
		m[n1].ci = c;
		if (c != m[0].ci)
			d++;
		n1++;
	}
	n1 -= 1;
	cs = n1;
	if (d == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < nn; i++) {
		if (m[i].ci == m[n1].ci) {
			if (m[i].ai != m[n1].ai) {
				zfs += max(m[i].ai, m[n1].ai) - min(m[i].ai, m[n1].ai);
				if ((cs - 2 * i) % 2 == 0)
					zfs += (cs - 2 * i) / 2;
				else
					zfs += (cs - 2 * i) / 2 + 1;
			} else
				zfs += m[i].ai;
		} else {
			if (m[i].ai != m[n1].ai) {
				zfs += max(m[i].ai, m[n1].ai) - min(m[i].ai, m[n1].ai);
				zfs += (cs - 2 * i) / 2;
			} else
				zfs += m[i].ai;
		}
		n1--;
		if (i + 1 == n1 || i == n1)
			break;
	}
	cout << zfs;
	return 0;
}
