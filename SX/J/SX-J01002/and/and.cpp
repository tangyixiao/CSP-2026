#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, ans = LLONG_MIN;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		long long sum = a[i];
		for (int j = i + 1; j <= n; j++) {
			if (j <= i + 1 + m)
				sum = sum & a[j];
		}
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}