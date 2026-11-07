#include <bits/stdc++.h>
using namespace std;
int ton[300005];
int init[500005];
int ans[300005];
int tans[300005];
bool flag = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> init[i];
		if (init[i] < init[i - 1]) {
			flag = 1;
		}
	}
	if (flag == 0) {
		tans[m] = n;
		int car = init[1];
		for (int i = 1; i <= n; i++) {
			if (car != init[i]) {
				tans[car] = i - 1;
				car = init[i];
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << tans[i] << " ";
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (ton[init[j]] == 0) {
				ton[init[j]] = j;
			} else {
				for (int k = ton[init[j]]; k < j; k++) {
					ton[init[k]] = 0;
				}
				ton[init[j]] = j;
			}
		}
		for (int q = 1; q <= m; q++) {
			if (ton[q] != 0) {
				ans[q]++;
			}
		}
		memset(ton, 0, sizeof(ton));
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
