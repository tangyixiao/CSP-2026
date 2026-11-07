#include <bits/stdc++.h>
using namespace std;
int n, m;
int sum[300005], a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int wz = i;
		for (int j = i; j >= 1; j--) {
			if (a[j] == a[i]) {
				wz = j;
				break;
			}
		}
		for (int j = 1; j <= wz; j++) {
			sum[a[j]]++;
		}
		for (int j = wz + 1; j <= i; j++) {
			a[j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}