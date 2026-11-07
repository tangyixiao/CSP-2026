#include <bits/stdc++.h>
using namespace std;
int a[200005], b[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxx ;
	for (int i = 1; i <= m; i++) {
		maxx = 0;
		int cnt;
		for (int j = 1; j <= n; j++) {
			if (a[j] >= maxx) {
				maxx = a[j];
				cnt = j;
			}
		}
		b[i] = maxx;
		a[cnt] = 0;
	}
	int sum = b[1];
	for (int j = 2; j <= m; j++) {
		sum = sum &b[j];
	}
	cout << sum;
	return 0;
}
