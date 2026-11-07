#include <bits/stdc++.h>
using namespace std;
long long n, m, j;

struct ll {
	long long sl;
	string zf;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	j = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].sl >> a[i].zf;
	}
	for (int i = 1; i <= n;) {
		if (i == j)
			break;
		if (a[i].zf != a[j].zf) {
			m += min(a[i].sl, a[j].sl);
		}
		if (a[i].sl != a[j].sl) {
			if (a[i].sl < a[j].sl) {
				a[j].sl -= a[i].sl;
				i++;
			} else {
				a[i].sl -= a[j].sl;
				j--;
			}
		} else {
			i++;
			j--;
		}
	}
	cout << m;
	return 0;
}
