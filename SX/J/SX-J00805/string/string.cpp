
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+10;
ll n, cnt, ans;

struct Node {
	ll num;
	char s;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].num >> a[i].s;
		cnt += a[i].num;
	}
	ll l = 1, r = n;
	while (l < r) {
		ll minx = min(a[l].num, a[r].num);
		if (a[l].s != a[r].s) {
			ans += minx;
			a[l].num -= minx;
			a[r].num -= minx;
//			cout << a[l].num << ' ' << a[r].num << endl;
//			cout << minx << endl;
		} else {
			a[l].num -= minx;
			a[r].num -= minx;
		}
		if (a[l].num == 0) {
			l++;
		} else if (a[r].num == 0) {
			r--;
		}
//		cout << l << ' ' << r << endl;
	}
	cout << ans;
	return 0;
}
