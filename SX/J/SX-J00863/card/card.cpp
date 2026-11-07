#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[300010];
int b[300010];
int c[500010];
int d[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c[i]);
		a[c[i]]++;
		b[c[i]] = i;
	}

//	for (int i = 1; i <= m; i++) {
//		printf("%d ", b[i]);
//	}
	for (int i = 1; i <= m; i++) {
		for (int j = b[i] - 1; j >= 1; j--) {
			//cout << c[j] << endl;
			//cout << i << " " << a[c[j]] << endl;
			if (b[c[j]] == j) {
				d[i] += a[c[j]];
			}

		}
	}
	for (int i = 1; i <= m; i++) {
		d[i] += a[i];
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", d[i]);
	}
}