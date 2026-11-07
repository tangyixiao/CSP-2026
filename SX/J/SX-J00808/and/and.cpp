#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200010], s[200010][200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	s[1][1] = a[1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			s[i][j] = max(s[i - 1][j - 1] & a[i], s[i - 1][j]);
		}
	}
	printf("%d", s[n][m]);
	return 0;
}

