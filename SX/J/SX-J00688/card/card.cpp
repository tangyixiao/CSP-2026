#include <bits/stdc++.h>
using namespace std;
int b[100005];
int a[100005];
int c[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {
		a[i - 1] = 0;
		for (int j = 1; j <= i - 1; j++) {
			if (b[i] == a[j]) {
				for (int z = j; z <= i; z++) {
					a[z] = 0;
				}
			}
		}
		a[i] = b[i];
	}
	for (int i = 1; i <= n; i++) {
		c[a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
