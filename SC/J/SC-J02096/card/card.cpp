#include <bits/stdc++.h>
using namespace std;
int n, p;
int a[500050], b[500050];
int c[500050];
int m[300050];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> p;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		a[i] = b[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int l = 1; l <= n; l++) {
			a[l] = b[l];
		} //初始化 
		for (int j = i; j <= n; j++) {
			if ( m[a[j]] == 1) {
				int op = j-1;
				for (int h = op; h >= 1; h--) {
					a[op] = 0;
					m[a[op]] = 0;
				}
				a[j] = 0;
			}
			// 删数 
			m[a[j]] = 1;
		}
		for (int k = 1; k <= n; k++) {
			c[a[k]]++;
		}
	}
	for (int x = 1; x <= p; x++) {
		cout << c[x] << " ";
	}
	return 0;
}