#include <bits/stdc++.h>
#define N 200005

using namespace std;

int n, m;
int a[N];
int main() {
	freopen ("and.in", "r",stdin);
	freopen ("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int maxn = -9999;
		for (int i = 1; i <= n; i++) {
			maxn = max (maxn, a[i]);
		}
		cout << maxn;
		return 0;
	} 
	if (m == 2) {
		int maxn = -9999;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max (maxn, (a[i] & a[j]));
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == n) {
		for (int i = 2; i <= n; i++) {
			a[i] = (a[i] & a[i - 1]);
		}
		cout << a[n];
		return 0;
	}
	if (m == n - 1) {
		int maxn = -9999;
		for (int i = 2; i <= n; i++) {
			int ans = 0;
			for (int j = 1; j <= n; j++) {
				if (i == j) continue;
				a[j] = (a[j] & a[j - 1]);
				if (j == n){
					ans = a[j];
				}
			}
			maxn = max (maxn, ans);
		}
		cout << maxn; return 0;
	}
	else {
//		int maxn1 = -999;
//		int maxn2 = -999;
//		int maxn3 = -999;
//		for (int i = 1; i <= n; i++) {
//			maxn1 = max (a[i],maxn1);
//		}
//		for (int i = 1; i <= n;i++) {
//			if (a[i] == maxn1) continue;
//			maxn2 = max (maxn2, a[i]);
//		}
//		for (int i = 1; i <= n;i++) {
//			if (a[i] == maxn1) continue;
//			if (a[i] == maxn2) continue;
//			maxn3 = max (maxn3, a[i]);
//		}
//		cout << (maxn1 & maxn2 & maxn3);
//		return 0;
		sort (a + 1, a + n + 1);
		for (int i = n - 1; i >= n - m + 1; i--) {
			a[i] = (a[i] & a[i + 1]);
		}
		cout << a[n - m + 1];
		return 0;
	}
	return 0;
} 