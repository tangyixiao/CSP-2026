#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;

int n;
char a[N];
long long b[N];
long long max_, ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b[i] >> a[i];
		max_ += b[i];
	}
	long long la = 0, ra = n - 1, lb = b[la], rb = b[ra];
	while (ra > la) {
		if (lb == 0) {
			la++;
			lb = b[la];
		}
		if (rb == 0) {
			ra--;
			rb = b[ra];
		}
		if (la >= ra)
			break;
		long long x1 = min(lb, rb);
		if (a[la] != a[ra]) {
//			cout << x1 << " " << lb << " " << rb << " " << la << " " << ra << endl;
			ans += x1;
			lb -= x1;
			rb -= x1;
		} else {
			lb -= x1;
			rb -= x1;
		}
	}
	cout << ans << endl;
	return 0;
}
