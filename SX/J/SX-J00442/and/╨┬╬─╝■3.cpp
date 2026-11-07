#include <bits/stdc++.h>
using namespace std;

long long cmp(long long a, long long b) {
	if (a < b)
		swap(a, b);
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + n, cmp);
	cout << a[m];
	return 0;
}
