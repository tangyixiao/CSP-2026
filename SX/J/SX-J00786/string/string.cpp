#include <bits/stdc++.h>
using namespace std;
long long n, cnt ;

struct node {
	long long a;
	char c;
} s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long n2 = 0;
	for (long long i = 1; i <= n; i++) {
		cin >> s[i].a >> s[i].c;
		n2 += s[i].a;
	}
	long long m;
	long long l = 1, r = n;
	while (l <= r) {
		if (s[l].c == s[r].c) {
			m = min(s[l].a, s[r].a);
			if (l != r) {
				s[l].a = (s[l].a - m);
				s[r].a = (s[r].a - m);
			} else
				s[r].a = (s[r].a - m);
		} else {
			m = min(s[l].a, s[r].a);
			if (s[l].a >= s[r].a) {
				cnt += m;
				s[l].a -= s[r].a;
				s[r].a = 0;
			} else if (s[l].a < s[r].a) {
				cnt += m;
				s[r].a -= s[l].a;
				s[l].a = 0;

			}
		}
		if (s[l].a == 0)
			l++;

		if (s[r].a == 0)
			r--;

	}

	cout << cnt;
	return 0;
}
