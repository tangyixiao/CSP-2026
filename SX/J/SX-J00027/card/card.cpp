#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 2e5 + 10, kMaxM = 1e5 + 10;

int n, m, a[kMaxN], b[kMaxN], ans[kMaxM];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++) {
		memset(b, sizeof b, 0);
		for (int j = i; j <= n; j ++) {
			ans[a[j]] ++;
			for (int k = i; k < j && !b[k]; k ++) {
				if (a[k] == a[j]) {
					for (int l = k; l < j; l ++) {
						b[l] = 1;
					}
					break;
				}
			}
		}
		for (int j = i; j <= n; j ++) {
			(!b[j]) && (ans[a[j]] ++);
		}
	}
	for (int i = 1; i <= m; i ++) {
		cout << ans[i] << " ";
	}
	return 0;
}
