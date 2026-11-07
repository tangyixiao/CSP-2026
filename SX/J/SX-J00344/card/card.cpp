#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[60000] = {}, s[60000] = {}, snum = 0, f = 0, z[20005];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		snum = 0;
		for (int y = i; y < n; y++) {
			for (int j = 0; j < snum; j++) {
				if (s[j] == a[i]) {
					f = 1;
					snum = j;
					break;
				}
			}
			if (f == 1) {
				for (int p = snum; p < n; p++)
					s[p] = 0;
			}
			f = 0;
			s[snum] = a[i];
			snum++;
		}
		for (int h = 0; h <= snum ; h++) {
			int u = s[i];
			z[u]++;
		}
	}
	for (int i = 1; i < m ; i++) {
		cout << z[i] << " ";
	}
	cout << z[m];
	return 0;
}