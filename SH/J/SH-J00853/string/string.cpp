#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	// freopen("string.in", "r", stdin);
	// freopen("string.out", "w", stdout);
	
	int n, tot = 0;
	cin >> n;
	
	vector<int> a(n + 1);
	char c[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		tot += a[i];
	}
	
	int mid = (tot + 1) / 2;
	long long idx_l = 0, idx_r = 0, ans = 0;
	int l = 1, r = n;
	
	while (idx_l <= mid && idx_r <= mid) {
		if (a[l - 1] != 0) {
			if (c[l - 1] == c[r]) {
				if (a[l - 1] >= a[r]) {
					a[l - 1] -= a[r];
					idx_r += a[r];
					r++;
					continue;
				} else {
					a[r] -= a[l - 1];
					idx_l += a[l - 1];
				}
			} else {
				if (a[l - 1] >= a[r]) {
					ans += a[r];
					a[l - 1] -= a[r];
					idx_r += a[r];
					r++;
					continue;
				} else {
					ans += a[l - 1];
					a[r] -= a[l - 1];
				}
			}
		} else if (a[r - 1] != 0) {
			if (c[r - 1] == c[l]) {
				if (a[r - 1] >= a[l]) {
					a[r - 1] -= a[l];
					idx_l += a[l];
					l++;
					continue;
				} else {
					a[l] -= a[r - 1];
					idx_r += a[r - 1];
				}
			} else {
				if (a[r - 1] >= a[l]) {
					ans += a[l];
					a[r - 1] -= a[l];
					idx_l += a[l];
					l++;
					continue;
				} else {
					ans += a[r - 1];
					a[l] -= a[r - 1];
				}
			}
		}
		
		if (c[l] == c[r]) {
			idx_l += a[l];
			idx_r += a[r];
			continue;
		} else {
			if (a[l] >= a[r]) {
				ans += a[r];
				a[l] -= a[r];
				idx_r += a[r];
			} else {
				ans += a[l]; 
				a[r] -= a[l];
				idx_l += a[l];
			}
		}
		l++; r--;
//		idx_l += (is_left ? 0 : a[l]);
//		idx_r += (is_left ? a[r] : 0);
//		if (idx_l <= idx_r) {
//			l++;
//		} else {
//			r--;
//		}
	}
	
	cout << ans;
	
	return 0;
}
