#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[201000], b[201000];
int cnt = INT_MIN;

void ma(int x, int sum) {
	if (x == m) {
		cnt = max(cnt, sum);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 0) {
			b[i] = 1;
			ma(x + 1, sum &a[i]);
			b[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		b[i] = 1;
		ma(1, a[i]);
		b[i] = 0;
	}
	cout << cnt;
	return 0;
}
