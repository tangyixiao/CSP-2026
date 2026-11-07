#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[1000000005], b[100000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i + 1] += a[i];
	}
	cout << a[1] * 4;
	return 0;
}
