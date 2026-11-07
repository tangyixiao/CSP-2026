#include <bits/stdc++.h>
using namespace std;

struct Node {
	int ii, x;
	string s;
} h[200005];

void solve(string _s, int i) {
	long long _k = 1, _x = 0, siz = _s.size();
	for (int j = siz - 1; j >= 0; j--) {
		_x = _x + _k * int(_s[j] - '0');
		_k *= 10;
	}
	h[i].x = _x;
	while (_x) {
		int _c = _x % 2;
		if (_c == 1) {
			h[i].ii++;
		}
		_x /= 2;
	}
	return;
}

bool cmp(Node x, Node y) {
	if (x.ii != y.ii)
		return x.ii > y.ii;
	else
		return x.x > y.x;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> h[i].s;
		solve(h[i].s, i);
//		cout << h[i].ii << ' ' << h[i].x << endl;
	}
	sort(h + 1, h + n + 1, cmp);
//	for (int i = 1; i <= n; i++)
//		cout << h[i].x << ' ';
	ans = h[1].x;
	for (int i = 2; i <= m; i++) {
		ans &= h[i].x;
	}
	cout << ans;
	return 0;
}
