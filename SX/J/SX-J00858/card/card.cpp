#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], ans[200005];
string s;

bool check(long long k) {
	for (long long i = 0; i < s.size(); i++) {
		if (s[i] - '0' == k )
			return 1;
	}
	return 0;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	int l = 1;
	for (long long i = 1; i <= n; i++) {
		s = "";
		for (long long j = l; j <= n; j++) {
			int f = 0;
			if (check(a[j]) == 0) {
				s += a[j] + '0';
			} else {
				for (long long p = 0; p < s.size(); p++) {
					if ((s[p] - '0') == a[j] ) {
						f = 1;
					}
					if (f == 1) {
						s[p] = '0';
					}
				}
				s += a[j] + '0';
			}
		}
		for (long long j = 0; j < s.size(); j++) {
			ans[s[j] - '0']++;
		}
		l++;
	}
	for (long long j = 1; j <= m; j++) {
		printf("%lld ", ans[j]);
	}
	return 0;
}