#include <bits/stdc++.h>
using namespace std;
int n, m, head, tail;
int t[1000005], c[1000005], a[1000005], b[1000005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			c[j] = a[j];
			t[c[j]]++;
			if (t[c[j]] > 1) {
				head += j - 1;
				for (int k = i; k < head; k++) {
					t[k] = 0;
				}
			}
		}
		b[c[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
