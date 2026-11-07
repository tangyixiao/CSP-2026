#include <bits/stdc++.h>
using namespace std;
long long a[200005];

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	bool b = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int x = log(a[i]);
		if ((1 << (x + 1)) - 1 != a[i])
			b = 0;
	}
	sort(a + 1, a + 1 + n, cmp);
	if (b == 1) {
		cout << a[m];
		return 0;
	}
	long long sum = 0;
	sum = a[1];
	for (int i = 2; i <= m; i++) {
		sum = sum &a[i];
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}