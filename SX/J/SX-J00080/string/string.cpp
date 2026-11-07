#include <bits/stdc++.h>
using namespace std;

struct hw {
	long long s;
	string a;
} b[200005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, t = 0, l = 0, r = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b[i].s >> b[i].a;
		r++;
	}
	r--;
	while (l < r) {
		if (b[l].s >= b[r].s && b[l].a != b[r].a)
			t += b[r].s, b[l].s -= b[r].s, r--;
		else if (b[l].s < b[r].s && b[r].a != b[l].a)
			t += b[l].s, b[r].s -= b[l].s, l++;
		else if (b[l].s >= b[r].s && b[l].a == b[r].a)
			b[l].s -= b[r].s, r--;
		else if (b[l].s < b[r].s && b[r].a == b[l].a)
			b[r].s -= b[l].s, l++;
		if (b[l].s == 0)
			l++;
		else if (b[r].s == 0)
			r--;
	}
	cout << t;
	return 0;
}
