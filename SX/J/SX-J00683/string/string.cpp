#include <bits/stdc++.h>
using namespace std;

int n, b = 0, a[210000];
long long l, y, ans = 0;
char s[210000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		char c;
		scanf("%d", &a[i]);
		cin >> c;
		s[i] = c;
	}
	l = n;
	y = l / 2;
	for (int i = 1; i <= y; i++) {
		if (s[i] != s[l])
			ans += a[i];
		--l;
	}
	printf("%lld\n", ans);
	return 0;
}
