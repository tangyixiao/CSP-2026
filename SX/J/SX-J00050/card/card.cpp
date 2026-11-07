#include <bits/stdc++.h>
using namespace std;

int n, m, a[500005], t[500005], q, ti = 1, ans[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	for (int i = 1 ; i <= m ; i++) {
		for (int j = i ; j <= n ; j++) {
			bool flag = false;
			for (int k = 1 ; k <= n ; k++) {
				if (a[j] == t[k]) {
					flag = true;
					q = k;
					break;
				}
			}
			if (!flag) {
				t[ti] = a[j];
				ti++;
			} else {
				t[q] = a[j];
				ti = q + 1;
				for (int l = q ; l <= n ; l++)
					t[l] = 0;
			}
		}
		for (int j = 1 ; j <= n ; j++) {
			ans[t[i]]++;
		}
	}
	for (int i = 1 ; i <= n ; i++) {
		if (ans[i + 1] != 0)
			cout << ans[i] << " ";
		else {
			cout << ans[i] << " ";
			break;
		}
	}
	return 0;
}