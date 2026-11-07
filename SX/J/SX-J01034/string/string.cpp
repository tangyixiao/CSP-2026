#include <bits/stdc++.h>
using namespace std;

int n;
int a[200010];
char c[200010];

int ds[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int L = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L += a[i];
		ds[i] = ds[i - 1] + a[i];
	}
	int l = 1, r = n;
//	if (L % 2 == 1) l = L/2,r = l+2;
//	else l = L/2,r =  l+1;

	long long ans = 0;
	while (l < r) {
		//cout << l << ' ' << r << ' ';
		if (a[l] < a[r]) {
			if (c[l] != c[r]) {
				ans += 1ll * a[l];
			}
			a[r] -= a[l];
			l++;
			if (!a[r])
				r--;
		} else {
			if (c[l] != c[r]) {
				ans += 1ll * a[r];
			}
			a[l] -= a[r];
			r--;
			if (!a[l])
				l++;
		}
	}
	cout << ans;
	return 0;
}