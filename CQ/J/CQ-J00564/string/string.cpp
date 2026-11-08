#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n;
struct node {
	long long cnt;
	char ch;
}a[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].cnt >> a[i].ch;
	}
	int l = 1, r = n;
	long long ans = 0;
	while (l <= r) {
		if (l == r) break ;
		if (a[l].ch == a[r].ch) {
			if (a[l].cnt < a[r].cnt) {
				a[r].cnt -= a[l].cnt;
				a[l].cnt = 0;
				l++;
			}else if (a[l].cnt > a[r].cnt) {
				a[l].cnt -= a[r].cnt;
				a[r].cnt = 0;
				r--;
			}else {
				a[l].cnt = 0, a[r].cnt = 0;
				l++, r--;
			}
			continue ;
		}
		if (a[l].cnt < a[r].cnt) {
			ans = ans + a[l].cnt;
			a[r].cnt -= a[l].cnt;
			a[l].cnt = 0;
			l++;
		}else if (a[l].cnt > a[r].cnt) {
			ans = ans + a[r].cnt;
			a[l].cnt -= a[r].cnt;
			a[r].cnt = 0;
			r--;
		}else {
			ans += a[l].cnt;
			a[l].cnt = 0, a[r].cnt = 0;
			l++, r--;
		}
	}
	cout << ans;
	return 0;
}
