#include <bits/stdc++.h>
using namespace std;

struct student {
	long long a;
	char c;
} s[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >>  s[i].a >> s[i].c;
	}
	int l = 1, r = n;
//	cout << n;
	while (l < r) {
		if (s[l].c == s[r].c) {
			if (s[l].a == s[r].a) {
				n -= 2;
				l++;
				r--;
			} else if (s[l].a < s[r].a) {
				n--;
				s[r].a -= s[l].a;
				l++;
			} else {
				n--;
				s[l].a -= s[r].a;
				r--;
			}
		} else {
			if (s[l].a == s[r].a) {
				ans += s[l].a;
				n -= 2;
				l++;
				r--;
			} else if (s[l].a < s[r].a) {
				ans += s[l].a;
				n--;
				s[r].a -= s[l].a;
				l++;
			} else {
				ans += s[r].a;
				n--;
				s[l].a -= s[r].a;
				r--;
			}
		}
//		n--;
	}
	cout << ans;
	return 0;
}
