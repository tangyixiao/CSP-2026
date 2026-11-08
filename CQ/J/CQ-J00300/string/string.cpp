#include <bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct st{
	long long a;
	char c;
}s[200005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
	}
	int l = 1, r = n;
	while (l < r) {
		if (s[l].c != s[r].c) {
			ans += min(s[l].a, s[r].a);
			if (s[l].a < s[r].a) {
				s[r].a -= s[l].a;
				l++;
			} else {
				s[l].a -= s[r].a;
				r--;
			}
		} else {
			if (s[l].a < s[r].a) {
				s[r].a -= s[l].a;
				l++;
			} else {
				s[l].a -= s[r].a;
				r--;
			}
		}
		if (s[l].a == 0) {
			l++;
		}
		if (s[r].a == 0) {
			r--;
		}
	}
	cout << ans;
	return 0;
}
