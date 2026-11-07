#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
ll n, arr[N], m, sum, ans, d;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		sum = max(arr[i], sum);
		ans = arr[1];
		ans = ans &arr[i];
	}
	if (m == 1) {
		cout << sum;
		return 0;
	}
	if (m == n) {
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < n - m; j++) {
			ll c = arr[i];
			for (int k = 1 + j; k <= 1 + m; k++) {
				c = c &arr[k];
			}
			d = max(c, d);
		}
	}
	cout << d;
	return 0;
}
