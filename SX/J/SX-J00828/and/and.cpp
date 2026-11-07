#include <bits/stdc++.h>
using namespace std;
int n, m, mx, flag;
int a[200005];
bool look[200005];

struct useful {
	int dt[200005];
};
useful b;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	memset(a, 0, sizeof(a));
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n - m + 1; i++) {//1-3
		memset(look, 0, sizeof(look));
		if (m > 2) {
			for (int s = 1; s <= m; s++) {
				b.dt[s] = a[i];
			}
			for (int j = n - m + 1; j >= 1; j--) {
				int cur = b.dt[1];
			}

		} else {
			for (int j = n - 1; j >= 1; j--) {
				for (int s = i + 1; s <= j ; s++) { //2-3
					int cur = a[i] & a[j];
					mx = max(mx, cur);
				}
			}
		}
	}
	printf("%d", mx);
	return 0;
}
