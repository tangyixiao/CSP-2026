#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = (int)2e5 + 11;
int n, m, a[N], c[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	int res = 0;
	for (int i = 29; i >= 0; i--) {
		int l = 0;
		for (int j = 1; j <= n; j++)
			if (a[j] & (1 << i))
				c[++l] = a[j];
		if (l >= m) {
			res += (1 << i);
			for (int j = 1; j <= l; j++)
				a[j] = c[j];
			n = l;
		}
	}
	printf("%d\n", res);
	return 0;
}
