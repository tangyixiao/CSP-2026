#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
ll n, ans = 0;
struct node {
	ll len;
	char c;
} d[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> d[i].len >> d[i].c;
	ll l = 1, r = n;
	while (l <= r) {
		if (d[l].len == d[r].len) {
			ans += (d[l].c != d[r].c) * d[l].len;
			l++, r--;
		} else if (d[l].len < d[r].len) {
			ans += (d[l].c != d[r].c) * d[l].len;
			d[r].len -= d[l].len, l++;
		} else {
			ans += (d[l].c != d[r].c) * d[r].len;
			d[l].len -= d[r].len, r--;
		}
	}
	cout << ans << '\n';
	return 0;
}