#include <bits/stdc++.h>;
using namespace std;

long long a[100010], ans[100010], b[100010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, n2;
	cin >> n >> m;
	n2 = n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		n2 = n;
		for (int j = i; j < n2; j++) {
			int l = j;
			for (int k = 0; k < j; k++) {
				if (b[k] == b[j]) {
					n2 -= j - k;
					j = i;
					break;
				}
			}
			b[j] = a[l];
		}
		for (int j = 0; j < n2; j++) {
			ans[b[j] - 1]++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
