#include <bits/stdc++.h>

using namespace std;

long long n, m, arr[2000086], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	sort(arr + 1, arr + n + 1);
	if (m == 1) {
		cout << arr[n];
		return 0;
	}
	for (int i = 1; i <= n - m + 1 ; i++) {
		long long x = arr[i];
		for (int j = i + 1; j <= i + m - 2; j++) {
			x &= arr[j];
		}
		ans = max(ans, x);
	}
	cout << ans;
	return 0;
}
/*

4 2
3 15 12 12

5 3
31 3 1 15 7


*/
