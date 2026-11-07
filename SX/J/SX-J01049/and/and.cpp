#include <bits/stdc++.h>
using namespace std;
long long a[10000001];
long long n, m;

int cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n ; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	long long sum = a[0];
	//cout << a[0];
	for (int i = 1; i < m; i++) {
		sum &= a[i];
	}
	cout << sum;
	return 0;
}
