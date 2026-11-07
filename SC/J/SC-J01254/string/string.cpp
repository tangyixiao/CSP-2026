#include<bits/stdc++.h>
using namespace std;
int n;
struct str {
	long long len;
	char c;
};
str s[200005];
unsigned long long ans = 0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> s[i].len >> s[i].c;
	}
	int l = 1, r = n;
	while (l < r) {
		if (s[l].len < s[r].len) {
			if (s[l].c != s[r].c) {
				ans += s[l].len;
				s[r].len -= s[l].len;
				l += 1;
			} else {
				s[r].len -= s[l].len;
				l += 1;
			}
		} else if (s[l].len > s[r].len) {

			if (s[l].c != s[r].c) {
				ans += s[r].len;
				s[l].len -= s[r].len;
				r -= 1;
			} else {
				s[l].len -= s[r].len;
				r -= 1;
			}
		} else if (s[l].len == s[r].len) {
			if (s[l].c != s[r].c) {
				ans += s[r].len;
				r -= 1;
				l += 1;
			} else {
				r -= 1;
				l += 1;
			}
		}
	}
	cout << ans;
	return 0;
}