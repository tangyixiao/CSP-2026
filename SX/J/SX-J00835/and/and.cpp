#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, a1 = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int r;
		cin >> r;
		for (int j = 1; j <= i; j++) {
			if (a[j] == r)
				a1 = 0;
		}
		if (a1 == 1)
			a[i] = r;
	}
	sort(a + 1, a + n + 1);
	cout << a[n - m + 1];
	return 0;
}
