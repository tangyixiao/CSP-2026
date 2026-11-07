#include <bits/stdc++.h>
using namespace std;

struct Node {
	long long t;
	char u;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long p = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].t >> a[i].u;
	}
	int l = 1;
	int r = n;
	while (l <= r) {
		long long s = 0;
		if (a[l].u != a[r].u) {
			s = min(a[l].t, a[r].t);
		}
		p += s;
		if (a[l].t < a[r].t) {
			a[r].t -= a[l].t;
			l++;
		} else if (a[l].t > a[r].t) {
			a[l].t -= a[r].t;
			r--;
		} else if (a[l].t == a[r].t) {
			l++;
			r--;
		}

	}
	cout << p;
	return 0;
}
