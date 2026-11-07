#include <bits/stdc++.h>
using namespace std;
long long sum;
long long a[100000001];
char c[10001];
long long ci;
char l[10000001];

int main() {
	freopen("string.in", "r", "stdin");
	freopen("string.out", "w", "stdout");
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		scanf("%lld", &a[i]);
		scanf("%c", &c[i]);
		ci = ci + a[i];
	}
	for (int i = 0; i <= n; i++) {
		for (int j = a[i]; j > 0 ; j--) {
			l[j] = c[j];

		}
	}

	for (int i = 1; i <= ci / 2; i++) {
		if ('l[i] ' != 'l[ci - 1]') {
			sum++;
		}
	}
	printf("%lld\n", sum);
	return 0;
}