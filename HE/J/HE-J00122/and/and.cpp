#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	long long n, m;
	cin >> n >> m;
	long long a[n + 1];
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	if (m == 1) {
		long long amax = 0;
		for (long long i = 1; i <= n; i++) {
			if (a[i] > amax) amax = a[i];
		}
		cout << amax;
	}
	else if (m == 2) {
		long long amax = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = i + 1; j <= n; j++) {
				long long ans1 = (a[i] & a[j]);
				if (ans1 > amax) amax = ans1;
			}
		}
		cout << amax;
	}
	else if (m == n) {
		long long ans = LLONG_MAX >> 1;
		for (long long i = 1; i <= n; i++) {
			ans = ans & a[i];
		}
		cout << ans;
	}
	else if (m == n - 1) {
		long long amax = 0;
		for (long long i = 1; i <= n; i++) {
			long long ans = LLONG_MAX >> 1;
			for (long long j = 1; j <= n; j++) {
				if (j == i) continue;
				ans = ans & a[j];
			}
			if (ans > amax) amax = ans;
		}
		cout << amax;
	}
	else if (m == 3) {
		long long amax = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = i + 1; j <= n; j++) {
				for (long long k = j + 1; k <= n; k++) {
					long long ans1 = (a[i] & a[j] & a[k]);
					if (ans1 > amax) amax = ans1;
				}
			}
		}
		cout << amax;
	}
	else if (m == 4) {
		long long amax = 0;
		for (long long i = 1; i <= n; i++) {
			for (long long j = i + 1; j <= n; j++) {
				for (long long k = j + 1; k <= n; k++) {
					for (long long l = k + 1; l <= n; l++) {
						long long ans1 = (a[i] & a[j] & a[k] & a[l]);
						if (ans1 > amax) amax = ans1;
					}
				}
			}
		}
		cout << amax;
	}
	else {
		sort (a + 1, a + n + 1);
		for (int i = 1; i <= n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
		long long ans = LLONG_MAX >> 1;
		for (int i = 1; i <= m; i++) {
			ans = ans & a[n - i + 1];
		}
		cout << ans;
	}
	return 0;
}
