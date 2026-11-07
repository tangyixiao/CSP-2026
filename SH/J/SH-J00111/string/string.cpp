#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+10;
struct node {
	int a;
	char c;
	void read() {
		cin >> a >> c;
	}
} s[N];
int n, h, t, ans;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
		s[i].read();
	h = 1, t = n;
	while (h < t) {
		if (s[h].c != s[t].c) ans += min(s[h].a, s[t].a);
		if (s[h].a < s[t].a) {
			s[t].a -= s[h].a;
			h++;
		}
		else if (s[h].a == s[t].a) h++, t--;
		else {
			s[h].a -= s[t].a;
			t--;
		}
	}
	cout << ans << "\n";
	return 0;
}
