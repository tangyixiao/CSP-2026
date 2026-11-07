#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500010];
int t[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		t[a[i]] += i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			int zk = j + 1;
			while (a[zk] != a[j] && zk <= n) {
				zk++;
			}
			if (zk < n) {
				for (int k = j; k < zk; k++) {
					t[a[k]]--;
				}
				j = zk;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}
