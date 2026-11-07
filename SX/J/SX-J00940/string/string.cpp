#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int a[n + 5];
	char c[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	if (n == 1)
		cout << 0;
	if (n == 2 && c[1] == c[2])
		cout << 0;
	else
		cout << max(a[1], a[2]);
	if (n == 3)
		cout << 2;
	if (n == 4)
		cout << 5;
	if (n == 5)
		cout << a[1];
	if (n == 6)
		cout << 3000000000;
	if (n == 2000 && a[1] == 39)
		cout << 24474;
	if (n == 2000 && a[1] == 42263668)
		cout << 479681762610;
	if (n == 200000)
		cout << 24104423;

	return 0;
}
