#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[200005];
char c[200005];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	long long len = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
	}
	int mid = len / 2;
	int l = 0, r = n + 1;
	int lsum = 0, rsum = 0, ans = 0;
	while(lsum <= mid && rsum <= mid) {
//		cout << l << ' ' << r << ' ' << lsum << ' ' << rsum  << '\n';
		if (lsum == mid && rsum == mid) break;
		if (lsum == mid) {
			while(rsum < mid) {
				r--;
				int k = a[r];
				if (rsum + a[r] > mid) {
					k = mid - rsum;
				}
				if (c[l] != c[r]) {
					ans += k;
				}
				rsum += k;
			}
			break;
		}
		if (rsum == mid) {
			while(lsum < mid) {
				l++;
				int k = a[l];
				if (lsum + a[l] > mid) {
					k = mid - lsum;
				}
				if (c[l] != c[r]) {
					ans += k;
				}
				lsum += k;
			}
			break;
		}
		if (lsum == rsum) {
			l++, r--;
			int k1 = a[l], k2 = a[r];
			if (lsum + a[l] > mid) {
				k1 = mid - lsum;
			}
			if (rsum + a[r] > mid) {
				k2 = mid - rsum;
			}
			lsum += k1;
			rsum += k2;
			if (c[l] != c[r]) {
				ans += min(k1, k2);
			}
		}
		else if(lsum > rsum) {
			r--;
			int k = a[r];
			if (rsum + a[r] > mid) {
				k = mid - rsum;
			}
			if (c[l] != c[r]) {
				ans += min(lsum - rsum, k); 
			}
			rsum += k;
		} 
		else if (rsum > lsum) {
			l++;
			int k = a[l];
			if (lsum + a[l] > mid) {
				k = mid - lsum;
			}
			if (c[l] != c[r]) {
				ans += min(rsum - lsum, k);
			}
			lsum += k;
		}
	}
	cout << ans;
	return 0;
}

