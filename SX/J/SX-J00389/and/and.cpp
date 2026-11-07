#include <bits/stdc++.h>
using namespace std;
int n, m, z, o = 1;
int w[200005], sum1[200005], sum2[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
	}
	if (m == 1) {
		sort(w, w + n);
		cout << w[n];
		return 0;
	}
	if (m == n) {
		z = w[1];
		for (int i = 1; i <= n; i++) {
			z = w[i] & z;
		}
		cout << z;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n ; j++) {
				sum1[o] = w[i] & w[j];
				o++;
			}
		}
		sort( sum1 + 1, sum1 + o);
		cout << sum1[o - 1];
	}
	return 0;
}
