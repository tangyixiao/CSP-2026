#include <bits/stdc++.h>
using namespace std;

int n, m, a[50005], b[30005], c[4000], pd = 1, p2 = 0, p1 = 1;


int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int s = i;
		for (int j = i; j <= n; j++) {
			c[s] = a[j];
			for (int k = 1; k < s; k++) {
				if (c[k] == c[s]) {
					pd = 0;
					p2 = k;
				}
			}

			if (pd == 0) {
				for (int k = p2; k < s; k++) {
					c[k] = 0;
				}
				p1 = p2;
				pd = 1;
			}
			s++;
		}
		cout << p1 << endl;
		for (int k = 1 ; k <= n; k++) {
			b[c[k]]++;
			c[k] = 0;
		}
		p1 = i;
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
