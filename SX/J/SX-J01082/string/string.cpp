#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long a[N], ss = 0;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long  n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long  ans = 0;
	int i = 1, j = n;
	while (i <= j && i <= n && j >= 1) {
		if (a[i] > a[j]) {
			ss = a[j];
			a[i] = a[i] - a[j];
			a[j] = 0;
		} else {
			ss = a[i];
			a[j] = a[j] - a[i];
			a[i] = 0;
		}
		if (a[i] == 0)
			i++;
		if (a[j] == 0)
			j--;
		if (i > n || j < 1)
			break;
		if (c[i] != c[j]) {
			ans += ss;
		}
	}
	cout << ans;
	return 0;
}