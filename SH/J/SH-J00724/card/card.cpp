#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans;

int main () {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	} for (int i = 1; i <= n; i++) {
		int fl[300005] = {};
		int cnt = 0, c[500005] = {};
		for (int j = i; j <= n; j++) {
			if (!fl[a[j]]) {
				fl[a[j]]++;
				c[++cnt] = a[j];
			} else {
				bool flag = 0;
				for (int k = 1; k <= cnt; k++) {
					if (c[k] == -1) continue;
					if (flag) {
						fl[c[k]]--;
						c[k] = -1;
					} else {
						if (c[k] == a[j]) {
							flag = 1;
							fl[a[j]]--;
							c[k] = -1;
						}
					}
				}
			}
		} if (fl[i]) {
			ans++;
		}
	} cout << ans;
	return 0;
}
