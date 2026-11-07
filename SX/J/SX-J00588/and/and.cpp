#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
int m, n, s, y;

struct st {
	int a, v, x;
} p[N];

int cmp1(st a, st b) {
	return a.a > b.a;
}

int cmp2(st a, st b) {
	if (a.x != b.x) {
		return a.x > b.x;
	} else {
		return a.v < b.v;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> p[i].a;
		s = p[i].a;
		while (s != 0) {
			if (s % 2 == 0) {
				p[i].v++;
			} else {
				p[i].x++;
			}
			s = s / 2;
		}
	}
	if (m == 1) {

		sort(p + 1, p + n + 1, cmp1);
		cout << p[1].a;
		return 0;
	}
	sort(p + 1, p + n + 1, cmp2);
	s = p[1].a;
	for (int i = 2; i <= m; i++) {
		if (i + 2 <= n) {
			y = max(s &p[i].a, max(s &p[i + 1].a, s &p[i + 2].a));
		} else if (i + 1 <= n) {
			y = max(s &p[i].a, s &p[i + 1].a);
		}
		s = y;
	}
	cout << s;

	return 0;
}