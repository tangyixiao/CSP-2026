#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m, t = 0;
	cin >> n >> m;
	int a[n + 10], z[n + 10] = {0}, js[300005] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			z[j] = 0;
		}
		for (int j = i - 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (z[k] == a[j]) {
					for (int ip = k; ip <= n; i++) {
						z[ip] = 0;
					}
					z[t++] = a[j];
				} else {
					z[t++] = a[j];
				}
			}
		}
		for (int j = 1; j <= n; j++) {
			js[z[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << js[i];
	}


	return 0;
}
