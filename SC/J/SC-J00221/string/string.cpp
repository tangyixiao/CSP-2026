#include <iostream>

#define int long long

using namespace std;

const int N = 2e5 + 5;

int n, a[N], l, r, ans, num, las;
char c[N];

signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
	
	l = 0, r = n;
	while (true) {
		l++;
		num = a[l];
		if (las >= num) {
			if (c[r + 1] != c[l]) ans += num;
			las -= num, num = 0;
		} else if (las != 0) {
			if (c[r + 1] != c[l]) ans += las;
			num -= las, las = 0; 
		}
		if (l == r) break;
		if (las != 0) continue;
		while (num > 0 && l != r) {
			if (a[r] >= num) {
				if (c[r] != c[l]) ans += num;
				las = a[r] - num, num = 0;
			} else {
				if (c[r] != c[l]) ans += a[r];
				las = 0, num -= a[r];
			}
			r--;
		}
		if (l == r) break;
	}
	
	cout << ans;
	
	return 0;
}