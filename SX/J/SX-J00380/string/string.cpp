#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2000000 + 5;

ll ans, l, r, n;

//int a[N];
struct G {
	int x;
	string y;
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].x >> a[i].y;
	l = 1;
	r = n;
	while (l != r) {
		if (a[l].y != a[r].y) {
			if (a[l].x > a[r].x) {
				ans += a[r].x;
				a[l].x -= a[r].x;
				a[r].x = 0;
				r--;
			} else if (a[l].x < a[r].x) {
				ans += a[l].x;
				a[r].x -= a[l].x;
				a[l].x = 0;
				l++;
			} else  if (a[l].x == a[r].x && a[l].x != 0 && a[r].x != 0) {
				ans += a[l].x;
				a[r].x = 0;
				a[l].x = 0;
				l++;
				r--;
			}
		} else if (a[l].y == a[r].y) {
			if (a[l].x > a[r].x) {
				a[l].x -= a[r].x;
				a[r].x = 0;
				r--;
			} else if (a[l].x < a[r].x) {
				a[r].x -= a[l].x;
				a[l].x = 0;
				l++;
			} else if (a[l].x == a[r].x && a[l].x != 0 && a[r].x != 0) {
				a[r].x = 0;
				a[l].x = 0;
				l++;
				r--;
			}
		}

	}
	cout << ans;
	return 0;
}
