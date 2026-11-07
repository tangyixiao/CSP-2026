#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];

int f(int x) {
	long long sum = 0, k = 1;
	while (x != 0) {
		sum += k * (x % 2);
		x /= 2;
		k *= 10;
	}
	return sum;
}

int cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= m; i++) {
		a[i] = f(a[i]);
	}
	for (int i = 2; i <= m; i++) {
		int ans = 0, w = 1;
		while (a[i] != 0 && a[i - 1] != 0) {
			int g = a[i] % 10, l = a[i - 1] % 10;
			if (g == 1 && l == 1) {
				ans += w;
			}
			a[i] /= 10, a[i - 1] /= 10;
			w *= 10;
		}
		a[i] = ans;
	}
	int num = 0, r = 1;
	while (a[m] != 0) {
		num += (a[m] % 10) * r;
		a[m] /= 10;
		r *= 2;
	}
	cout << num;
	return 0;
}
