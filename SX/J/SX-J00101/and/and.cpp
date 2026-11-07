#include <bits/stdc++.h>
using namespace std;
int a[1001000];
int n, m;
int x = 10000;

int main() {
	freopen("and.in", "r", "stdin");
	freopen("and.out", "w", "stdout");
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		cin >> a[i];
		if (a[i] <= x)
			x = a[i];
	}
	if (m == 1)
		cout << x;
	else
		cout << a[n];
	return 0;

}
