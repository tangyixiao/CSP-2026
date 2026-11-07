#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long n, m;
long long a[500010];
long long ans[300010];

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
	int t = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (a[j] == a[k]) {
					t = k;
					break;
				}
			}

		}
	}
	for (int i = 1; i <= m; i++) {
		cout << n << ' ';
	}
	return 0;
}
