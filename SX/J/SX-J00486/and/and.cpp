#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n;
	int m;
	int ans = 0;
	int a[5000];
	cin >> n >> m;
	int q = 0;
	int w = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] < a[j + 1]) {
				q = a[j];
				w = a[j + 1];
				a[j] = w;
				a[j + 1] = q;
			}
		}
	}
	ans = a[0];
	for (int x = 1; x < m; x++) {
		int s = a[x];
		ans = ans &s;
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
