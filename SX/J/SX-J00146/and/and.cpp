#include <bits/stdc++.h>
using namespace std;
int x = -1;
int a[2005];

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		x = max(x, a[i]);
	}
	if (m == 1) {
		cout << x;
	}
	return 0;
}
