//#include <bits/stdc++.h>

//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	string a;
//	for (int i = 0; i < n; i++) {
//		int s;
//		char b;
//		cin >> s >> b;
//		for (int j = 0; j < s; j++) {
//			a += b;
//		}
//	}
//	string x, y;
//	for (int i = 0; i < a.size() / 2; i++) {
//		x += a[i];
//	}
//	int lenn = a.size();
//	int len = a.size();
//	if (len / 2 * 2 != len) {
//		len /= 2;
//		len++;
//	}
//	for (int i = len; i < a.size(); i++) {
//		y += a[i];
//	}
//	int ans = 0;
//	for (int i = 0; i < len; i++) {
//		if (x[i] != y[len - i - 2]) {
//			ans++;
//			cout << x[i] << '|' << y[len - i - 2];
//		}
//
//	}
//	cout << ans;
//	return 0;
//}
//
#include <bits/stdc++.h>
using namespace std;

struct aa {
	int len;
	char s;
};
aa a[10000001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int len;
	for (int i = 0; i < n; i++) {
		cin >> a[i].len >> a[i].s;
		len += a[i].len;
	}
	int lenn = len / 2;
	int x = 0, y = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i].len < lenn) {
//			b[i] = i;
//			lenn -= a[i].len;
//			x++;
//		}
//		if (a[i].len > lenn){
//			a[i].len -= lenn;
//			lenn = 0;
//			b[i] = i;
//			x++;
//			break;
//		}
//	}
//	int lenn = len / 2;
//	for (int i = n; i >= 0; i--) {
//		if (a[i].len < lenn) {
//			c[i] = i;
//			lenn -= a[i].len;
//			y++;
//		}
//		if (a[i].len > lenn){
//			a[i].len -= lenn;
//			lenn = 0;
//			c[i] = i;
//			y++;
//			break;
//		}
//	}
	long long ans = 0;
	int l = 0, r = n - 1;
	for (int i = 0; i < n * 3; i++) {
		if (l >= r)
			break;
		if (a[l].s != a[r].s) {
			if (a[l].len > a[r].len) {
				ans += a[r].len;
				a[l].len -= a[r].len;
				r--;
			} else if (a[l].len < a[r].len) {
				ans += a[l].len;
				a[r].len -= a[l].len;
				l++;
			} else {
				ans += a[l].len;
				a[l].len = 0;
				a[r].len = 0;
				l++;
				r--;
			}
		} else if (a[l].s == a[r].s) {
			if (a[l].len > a[r].len) {
				a[l].len -= a[r].len;
				r--;
			} else if (a[l].len < a[r].len) {
				a[r].len -= a[l].len;
				l++;
			} else {
				a[l].len = 0;
				a[r].len = 0;
				l++;
				r--;
			}
		}
	}
	cout << ans;

	return 0;
}
