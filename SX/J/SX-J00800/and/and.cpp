#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int n, m, a[N][35], y[N], ans = INT_MAX;
bool f[N];

int main() {
	freopen("and5.in", "r", stdin);
//	freopen("and.ans","w",stdout);
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &y[i]);
		int x = y[i];
		for (int j = 0; x; j++) {
			if (x % 2 == 1)
				a[i][j] = 1;
			x /= 2;
		}
	}
	for (int j = 31; j >= 0; j--) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (f[i] == true)
				continue;
			if (a[i][j] == 1)
				cnt++;
		}
		if (cnt >= m) {
			for (int i = 1; i <= n; i++) {
				if (a[i][j] != 1)
					f[i] = true;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (!f[i])
			ans &= y[i];
	}
	printf("%d", ans);
	return 0;
}