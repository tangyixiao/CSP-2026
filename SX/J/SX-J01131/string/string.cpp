#include <bits/stdc++.h>
using namespace std;

struct str {
	int a;
	char c;
};

int  main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n ;
	long long num = 0, r = 1, cnt = 0;
	cin >> n;
	long long l = n;
	str s[n + 10];
	for (int i = 1; i <= n; i ++) {
//		scanf("%d %c", &s[i].a, &s[i].c );
		cin >> s[i].a >> s[i].c;
		cnt += s[i].a;
	}
	while (r < l) {
		if (s[l].a < s[r].a  ) {
			s[r].a -= s[l].a;
			if (s[l].c != s[r].c ) {
				num += s[l].a;
				l --;
			} else {
				l--;
			}
		} else if (s[l].a == s[r].a  ) {
			if (s[l].c != s[r].c ) {
				num += s[l].a ;
				l --;
				r++;
			} else {
				l--;
				r ++;
			}
		} else if (s[l].a > s[r].a  ) {
			s[l].a -= s[r].a;
			if (s[l].c != s[r].c ) {
				num += s[r].a;
				r ++;
			} else
				r++;
		}
	}

	cout << num ;
	return 0;
}