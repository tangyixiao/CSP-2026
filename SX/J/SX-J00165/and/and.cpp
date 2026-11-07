#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200001];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	int ans = a[1];
	int k = 1;
	for (int i = 2; i <= n; i++) {
		if ((ans & a[i]) == 0) {
			continue;
		}
		ans &= a[i];
		k++;
		if (k == m) {
			break;
		}
	}
	cout << ans;
	return 0;
}