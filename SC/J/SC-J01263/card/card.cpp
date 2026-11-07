#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[500005], b[500005], sum[500005], h[500005];
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		cout << n;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		memset(h, 0, sizeof(h));
		for (int j = i; j <= n; j++) {
			b[j] = a[j];
			if (h[b[j]] != 0) {
				for (int k = h[b[j]]; k < j; k++) {
					h[b[k]] = 0;
					b[k] = 0;
				}
			}
			h[b[j]] = j;
		}
//		for (int j = i; j <= n; j++) {
//			if (b[j] != 0) cout << b[j] << ' ';
//		}
//		cout << '\n';
		for (int j = i; j <= n; j++) {
			sum[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}
/**/