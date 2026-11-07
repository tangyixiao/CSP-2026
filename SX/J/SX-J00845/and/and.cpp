#include <bits/stdc++.h>
using namespace std;
long long n, m, maxx, z, z1, a[100005];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	z = a[1];
	for (int i = 1; i <= n; i++) {
		z1 = z;
		for (int j = 1; j < m; j++) {
			z1 = a[i + j] & z1;
			cout << z1 << ' ' ;
		}
		cout << endl;
		if (maxx <= z1) {
			maxx = z1;
			z = z1;
		}
	}
	cout << maxx;
	return 0;
}