#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200010], sum;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	sum = 2147483647;
	for (int i = m; i <= n; i++) {
		sum = (sum &a[i]);
	}
	cout << sum;
	return 0;
}
