#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
int n, m, a[100010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n, cmp);
	if (m == 1) {
		cout << a[1];
	}
	int ma = INT_MIN;
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				ma = max(ma, a[i] & a[j]);
			}
		}
		cout << ma;
	}
	return 0;
}