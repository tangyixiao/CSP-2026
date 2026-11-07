#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;

bool cmp(long long a, long long b) {
	return a > b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	long long a[N];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	long long k = a[0];
	for (int i = 1; i < m; i++) {
		k = k &a[i];
	}
	cout << k;
}
