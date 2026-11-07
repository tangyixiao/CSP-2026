#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m;
long long k = 2, cnt = 1, kk = 1;
long long a[N], ans = -100000000000;
bool f = true, fff, ff[N];

long long check(int mm) {
	while (k <= n / 2) {
		if (mm > k && mm <= k * 2) {
			while (cnt >= 0) {
				ans -= kk;
				kk *= 2;
				cnt--;
			}
			break;
		} else {
			k *= 2;
			cnt++;
		}
	}
	return ans;
}

void dfs(int x, long long t) {
	for (int i = 1; i <= n; i++) {
		if (ff[i] != true) {
			ff[i] = true;
			if (x == m) {
				ans = max(ans, (t &a[i]));
			} else {
				if (x == 1) {
					dfs(x + 1, a[i]);
				} else {
					dfs(x + 1, (t &a[i]));
				}
			}
			ff[i] = false;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		long long t = a[i];
		while (f == true) {
			if (t % 2 != 0) {
				f = false;
				break;
			}
			if (t == 0)
				break;
			t /= 2;
		}
		if (a[i] != i - 1) {
			fff = true;
		}
	}
	if (f == true) {
		sort(a + 1, a + 1 + n);
		cout << a[n - m + 1];
		return 0;
	}
	if (fff == false) {
		if (m > n / 2) {
			cout << 0;
			return 0;
		}
		if (n == 1) {
			cout << 0;
			return 0;
		} else if (n == 2) {
			if (m == 1) {
				cout << 1;
			}
			return 0;
		} else if (n == 4) {
			if (m == 1) {
				cout << 3;
			} else if (m == 2) {
				cout << 2;
			}
			return 0;
		} else if (n == 8) {
			if (m == 1) {
				cout << 7;
			} else if (m == 2) {
				cout << 6;
			} else if (m >= 3 && m <= 4) {
				cout << 4;
			}
			return 0;
		} else {
			if (m == 1) {
				cout << n - 1;
				return 0;
			} else if (m == 2) {
				cout << n - 2;
				return 0;
			}
			ans = n - 1;
			cout << check(m);
			return 0;
		}
	}
	if (n == m) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (n <= 2000) {
		dfs(1, 0);
	}
	cout << ans;
	return 0;
}