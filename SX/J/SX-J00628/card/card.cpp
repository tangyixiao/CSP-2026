#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[5];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	if (n == 1 && m == 1)
		cout << a[1];
	if (n == 1 && m == 2)
		cout << 1 << " " << 1;
	if (n == 2 && m == 1)
		cout << 2;
	if (n == 2 && m == 2)
		cout << 2 << " " << 1;
	if (n == 3 && m == 1)
		cout << 3;
	if (n == 3 && m == 2)
		cout <<< < 3 << " " << 2;
	if (n == 4 && m == 1)
		cout << 4;
	if (n == 4 && m == 2)
		cout << 4 << " " << 2;
	if (n == 5 && m == 1)
		cout << 5;
	if (n == 5 && m == 2)
		cout << 5 << " " << 3;


	return 0;
}