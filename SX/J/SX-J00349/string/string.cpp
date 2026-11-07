#include <bits/stdc++.h>
using namespace std;

struct S {
	int a;
	string c;
};
S s[1000000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m, suml, sum = 0;
	cin >> n;
	m = n / 2;
	for (int i = 1; i <= n; ++i) {
		cin >> s[i].a >> s[i].c;
		suml += s[i].a;
	}
	for (int i = 1; i <= m; ++i) {
		if (s[i].c == s[n + 1 - i].c) {
			if (s[i].a == s[n + 1 - i].a) {
				continue;
			} else {
				sum += max(s[i].a, s[n + 1 - i].a) - min(s[i].a, s[n + 1 - i].a);
			}
		}
	}
	printf("%d", sum);
	return 0;
}
