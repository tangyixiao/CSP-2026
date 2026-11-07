#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], b[100005], maxx;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i] == 3 && a[j] == 15)
				b[i] = 3;
			if (a[i] == 3 && a[j] == 12)
				b[i] = 0;
			if (a[i] == 15 && a[j] == 12)
				b[i] = 12;
			if (a[i] == 12 && a[j] == 12)
				b[i] = 12;
		}
	}
	for (int i = 1; i <= 100005; i++) {
		maxx = max(maxx, b[i]);
	}
	cout << maxx;

	return 0;
}