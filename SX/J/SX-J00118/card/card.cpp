#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, s;
	int a[n];
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	cin >> a[n];
	if (m == 1) {
		cout << n;
	} else {
		cout << a[n];
	}
	return 0;
}
