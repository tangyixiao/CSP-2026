#include <bits/stdc++.h>
using namespace std;
int a[200001];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxx = 0;
	for (int i = 0; i < (1 << n); i++) {
		int k = 0, cnt = (1 << n) - 1, sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				cnt &= a[j], k++;
			}
		}
		if (k == m) {
			maxx = max(maxx, cnt);
		}
	}
	cout << maxx;
	return 0;
}