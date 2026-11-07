#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, a[N];
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d%c", a[i], c[i]);
	}
	if (n == 1) {
		printf("0\n");
		return 0;
	} else if (n == 2) {
		printf("%d\n", min(a[1], a[2]));
		return 0;
	}
	return 0;
}
