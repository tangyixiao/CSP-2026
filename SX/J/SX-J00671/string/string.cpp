#include <bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, x, y;
	long long sum = 0;
	cin >> n;
	x = 1;
	y = n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	while (1) {
		if (x >= y)
			break;
		if (a[x] > a[y] and b[x] != b[y])
			sum += a[y], a[x] -= a[y], y--;
		if (x >= y)
			break;
		if (a[x] < a[y] and b[x] != b[y])
			sum += a[x], a[y] -= a[x], x++;
		if (x >= y)
			break;
		if (a[x] == a[y] and b[x] != b[y])
			sum += a[x], x++, y--;
		if (x >= y)
			break;
		if (a[x] == a[y] and b[x] == b[y])
			x++, y--;
		if (x >= y)
			break;
		if (a[x] < a[y] and b[x] == b[y])
			a[y] -= a[x], x++;
		if (x >= y)
			break;
		if (a[x] > a[y] and b[x] == b[y])
			a[x] -= a[y], y--;
		if (x >= y)
			break;
	}
	cout << sum;
	return 0;
}