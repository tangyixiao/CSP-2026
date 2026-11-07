#include <bits/stdc++.h>
using namespace std;
long long n, m;
int a[100000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int ij = 1; ij <= n; ij++) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (a[i] == 0)
					break;
				if (a[i] == a[j]) {
					for (int x = i; x <= j; x++) {
						a[x] = 0;
					}
				}
			}
		}
		for (int i = 1 ; i <= n; i++) {
			b[a[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i];
	}
	return 0;
}
