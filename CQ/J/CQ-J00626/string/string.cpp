#include <iostream>

using namespace std;
typedef long long ll;

const int N = 2e5 + 5;
int n;
int a[N];
ll sum[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	ll len = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	ll ans = 0;
	len >>= 1;
	int i = 1, j = n;
	while(i != j) {
		ll la = sum[i - 1] + 1;
		ll ra = sum[i];
		ll l_b = sum[j - 1] + 1;
		ll r_b = sum[j];
		ll lb = sum[n] - r_b + 1;
		ll rb = sum[n] - l_b + 1;
		char ca = c[i], cb = c[j];
		if (la <= lb && rb <= ra) {
			if (ca != cb)
				ans += rb - lb + 1;
			j--;
		} else if (lb <= la && ra <= rb) {
			if (ca != cb)
				ans += ra - la + 1;
			i++;
		} else if (lb <= la && rb <= ra) {
			if (ca != cb)
				ans += rb - la + 1;
			j--;
		} else if (la <= lb && ra <= rb) {
			if (ca != cb)
				ans += ra - lb + 1;
			i++;
		}
	}
	cout << ans;
	return 0;
}
