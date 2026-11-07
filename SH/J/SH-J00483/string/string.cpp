#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = (int)2e5 + 11;
ll a[N];
int c[N], n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		char ch[11];
		scanf("%s", ch + 1);
		c[i] = ch[1] - 'a';
	}
	ll res = 0;
	for (int i = 1, j = n; i < j; i++)
		while (a[i] > 0 && i < j) {
			if (a[j] <= a[i]) {
				if (c[j] != c[i])
					res += a[j];
				a[i] -= a[j];
				--j;
			} else {
				if (c[j] != c[i])
					res += a[i];
				a[j] -= a[i];
				a[i] = 0;
			}
		}
	printf("%lld\n", res);
	return 0;
}
