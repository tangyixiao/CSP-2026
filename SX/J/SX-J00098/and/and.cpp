#include <bits/stdc++.h>
using namespace std;
long long n, a, b[200005], p;

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> a;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + n + 1, cmp);
	p = b[1];
	for (int i = 2 ; i <= a; i++)
		p &= b[i];
	cout << p;
	return 0;
}
