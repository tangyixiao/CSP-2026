#include <bits/stdc++.h>
using namespace std;
long long z, x, y, a1[20005], cnt;
string a2[20005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> z;
	x = 1;
	y = z;
	for (int i = 1; i <= z; i++)
		cin >> a1[i] >> a2[i];
	while (x < y) {
		if (a1[x] > a1[y]) {
			if (a2[x] != a2[y])
				cnt += a1[y];
			a1[x] -= a1[y];
			y--;
		} else if (a1[x] < a1[y]) {
			if (a2[x] != a2[y])
				cnt += a1[x];
			a1[y] -= a1[x];
			x++;
		} else {
			if (a2[x] != a2[y])
				cnt += a1[x];
			x++;
			y--;
		}
	}
	cout << cnt;
	return 0;
}

