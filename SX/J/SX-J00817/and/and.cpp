#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005];

struct st {
	int xxx[35];
	int cnt1;
} num[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	cin >> a[i];
	int xx = a[i], cnt = 0;
	while (xx != 0) {
		int bb = xx % 2;
		cnt++;
		num[i].xxx[cnt] = bb;
		xx /= 2;
	}
	num[i].cnt1 = cnt;
}
int maxx = INT_MIN;

for (int i = 1; i <= n; i++) {
	sort(a + 1, a + n + 1);
	cout << a[n - m + 1];
	return 0;
}