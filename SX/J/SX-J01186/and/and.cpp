#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000];
int maxx, max2;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	if (m == 1) {
		sort(a + 1, a + n + 1, greater<int>());
		cout << a[1];
	} else {
		for (int i = 1; i <= n; i++) {
			while (a[i] >= 0) {
				int cnt = 1;
				b[i] += cnt * (a[i] % 2);
				a[i] / 2;
				cnt *= 10;
			}
		}
		maxx = 0;
		max2 = 0;
		for (int i = 1; i <= m; i++) {
			for (int a = 1; a <= n; a++) {
				for (int c = a + 1; c <= n; c++) {
					int sum ;
					sum = b[a] + b[c];
					while (sum = 0) {
						if (sum % 10 == 2 || sum % 10 == 0)
							max2++;
					}
				}
			}
			if (max2 > maxx)
				maxx = max2;
			max2 = 0;
		}
	}
	cout << max2;


}
