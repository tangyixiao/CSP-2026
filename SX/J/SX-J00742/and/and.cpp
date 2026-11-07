#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int cnt = a[m];
	for (int i = m + 1; i <= n; i++) {
		cnt = (a[i] & cnt);
	}
	cout << cnt << endl;

	return 0;
}
