#include <bits/stdc++.h>
using namespace std;

long long ns[10010], ms[10010];
int n, m;
long long mxn = 0;

void f(int h) {

	if (h == m + 1) {
		long long x = ns[ms[1]];
		for (int i = 2; i <= m; i++) {
			x = x &ns[ms[i]];
		}
		mxn = max(mxn, x);
		return;
	}
	for (int i = ms[h - 1] + 1; i <= n - m + h; i++) {
		ms[h] = i;
		f(h + 1);
	}

}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> ns[i];
	}
	f(1);
	cout << mxn;
	return 0;
}