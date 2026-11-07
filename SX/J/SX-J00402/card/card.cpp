#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 * 5;
const int maxN = 1e5 * 3;
int n, m, a[maxn], b[maxn], ans[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int I = 1, cnt = 0; I <= n; I++) {
		memset(b, sizeof(b), 0);

		for (int j = I; j <= n; j++) {
			/*
			打出第i+j张
			*/
			for (int l = I; l < j; l++) {
				if (a[l] == a[j]) {
					for (int w = l; w < j; w++) {
						b[w] = 7;
					}
					break;
				}
			}
		}
		for (int j = I; j <= n; j++) {
			if (b[j] != 7) {
				ans[a[j]]++;
			}
		}
	}
	for (int I = 1; I <= m; I++) {
		cout << ans[I] << ' ';
	}

	return 0;
}