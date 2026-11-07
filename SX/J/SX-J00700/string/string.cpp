#include <bits/stdc++.h>
using namespace std;
int a, n, l, ans;
char x[200005], c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdin);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%s", &a, &c);
		for (int j = l + 1; j <= l + a; j++)
			x[j] = c;
		l += a;
	}
	for (int i = 1; i <= l / 2; i++) {
		if (x[i] != x[n - i + 1])
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
