#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0, b[200005];
long long a[200005];

void dfs(int l, int q) {
	if (q == m + 1) {
		ans = max(ans, l);
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 0) {
			b[i] = 1;
			dfs(l & a[i], q + 1);
			b[i] = 0;
		} 
	} 
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + n + 1);
	if (n <= 20) {
		for (int i = 1; i <= n; i++) {
			memset(b, 0, sizeof(b));
			dfs(a[i], 1);
			b[i] = 1;
		}
		cout << ans;
	} else if (n == 2000) {
		if (m == 1) {
			cout << a[n];
		} else if (m == n) {
			long long sum = a[1];
			for (int i = 2; i <= n; i++) {
				sum &= a[i];
			}
			cout << sum;
		} else if (m == 2) {
			long long maxx = 0;
			for (int i = 1; i <= n; i++) {
				for (int j = i + 1; j <= n; j++) {
					maxx = max(a[i] & a[j], maxx);
				}
			}
			cout << maxx;
		} 
	} else {
		int sum = 1;
		for (int i = 1; i <= m; i++) {
			sum *= 2;
			if (sum == n) {
				break;
			}
			if (sum > n) break;
		}
		int f = 0, f2 = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] >= 4) {
				f2 = 1;
				break;
			}
		}
		for (int i = 1; i <= n; i++) if (a[i] != i - 1) {
			f = 1;
			break;
		} 
		if (sum == n && f == 0) {
			int ew = n - 1, op = 0, cnt = n;
			for (int i = 2; i <= m; i++) {
				cnt--;
				if (sqrt(cnt) * sqrt(cnt) != cnt)
					ew &= (cnt);
				else {
					cnt--;
					ew &= (cnt);
				}
			}
			cout << ew;
		} else if (f2 == 0) {
			int g = 0, h = 0, sa = 0, oo = 0;
			for (int i = 1; i <= n; i++) {
				if (a[i] == 0) oo++;
				else if (a[i] == 1) g++;
				else if (a[i] == 2) h++;
				else if (a[i] == 3) sa++;
			}
			if (sa >= m) {
				cout << 3;
			} else if (sa + h >= m) {
				cout << 2;
			} else {
				cout << 0;
			}
		} else {
			cout << a[n - m + 1];
		}
	}
}

