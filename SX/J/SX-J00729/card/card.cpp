#include <bits/stdc++.h>
using namespace std;

int n, m;
int vis[300005];
int z[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> z[i];
	}
	for (int i = 1; i <= n; i++) {
		string xx = "";
		for (int j = i; j <= n; j++) {
			for (int q = 1; q < j; q++) {
				if (xx[q] == z[j]) {
					int x = n;
					while (x >= q) {
						xx[x] = ' ';
						x--;
					}
				}
			}
			xx = xx + char(z[j] + '0');
		}
		for (int j = 1; j <= xx.size(); j++) {
			vis[xx[j] - '0']++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << vis[i] << " ";
	}
	return 0;
}
