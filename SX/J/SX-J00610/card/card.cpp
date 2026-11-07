#include <bits/stdc++.h>
using namespace std;
int a[200010][3000], c[200010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, x;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		c[i] = x;
	}
	cout << x;
	return 0;
}