#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
typedef long long ll;
int n, l = 1, r;
ll ans;

struct Node {
	ll c ;
	char w; // c count  w word
} a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].c >> a[i].w;
	}
	r = n;//2
	while (l <= r) {//l 1    r 2
		if (a[l].c > a[r].c) {
			a[l].c -= a[r].c;
			if (a[l].w != a[r].w) {
				ans += a[r].c;
				a[r].c = 0;
			}
			r--;
		}
		if (a[l].c == a[r].c) {
			if (a[l].w != a[r].w) {
				ans += a[r].c;
				a[l].c = 0, a[r].c = 0;
			}
			l++, r--;
		}
		if (a[l].c < a[r].c) {
			a[r].c -= a[l].c;
			if (a[l].w != a[r].w) {
				ans += a[l].c;
				a[l].c = 0;
			}
			l++;
		}
	}
	cout << ans;
	return 0;
}