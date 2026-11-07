#include <bits/stdc++.h>
using namespace std;
int n, m, a[100005], b[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//while (n--)
//		cout << 0 << " ";
	int cnt[100005];
	for (int i = 1; i <= n; i++) {

		for (int j = i; j <= n; j++) {
			b[j] = a[j];
			for (int k = i; k <= j; k++) {
				if (b[k] == a[k]) {
					for (int e = k; e < j; e++) {
						b[e] = 0;
					}
				}
			}
		}

		for (int f = i; f <= n; f++) {
			if (b[f] <= m && b[f] >= 1) {
				cnt[b[f]] = i;

				break;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}
