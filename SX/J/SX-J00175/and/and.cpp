#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n, m, a[10010], ans = -1;

int main() {
	freopen("and1.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 2) {
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				int s = a[i] and a[j];
				ans = max(ans, s);
			}
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				for (int l = 1; l <= n; l++) {
					int s = a[i] and a[j] and a[l];
					ans = max(ans, s);
				}
	}
	cout << ans;
	return 0;
}
