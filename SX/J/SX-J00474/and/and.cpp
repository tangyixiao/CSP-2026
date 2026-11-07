#include <bits/stdc++.h>
using namespace std;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, maxx = -1;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	sort(a + 1, a + n + 1);
//	for (long long i = 1; i <= n; i++) {
//		long long sum = 0;
//		sum = a[i];
//		for (long long j = i + 1; j <= i + m; j++) {
//			sum = sum&&a[j];
//		}
//		maxx = max(maxx, sum);
//	}
//	cout << maxx;
	cout << a[n];
	return 0;
}