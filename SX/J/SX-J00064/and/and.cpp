#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1 + 10;

int h[N];

bool cmp(int x, int y) {
	return x > y;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int maxx;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
		maxx = max(maxx, h[i]);
	}
	if (m == 1) {
		cout << maxx << endl;
		return 0;
	}
	sort(h + 1, h + n + 1, cmp);
	cout << h[m] << endl;
	return 0;
}
