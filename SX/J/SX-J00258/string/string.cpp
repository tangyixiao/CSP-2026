#include <bits/stdc++.h>
using namespace std;
long long n, ans, x[114514 * 2];
char c[114514 * 2];

void f(int head, int tail) {
	if (head >= tail)
		return;
	if (c[head] != c[tail]) {
		bool b = 1;
		ans += min(x[head], x[tail]);
		if (x[head] == x[tail] && b) {
			x[head] = x[tail] = 0;
			head++;
			tail--;
			b = 0;
		}
		if (x[head] > x[tail] && b) {
			x[head] -= x[tail];
			tail--;
			b = 0;
		}
		if (x[head] < x[tail] && b) {
			x[tail] -= x[head];
			head++;
			b = 0;
		}
	} else {
		bool b = 1;
		if (x[head] == x[tail] && b) {
			x[head] = x[tail] = 0;
			head++;
			tail--;
			b = 0;
		}
		if (x[head] > x[tail] && b) {
			x[head] -= x[tail];
			tail--;
			b = 0;
		}
		if (x[head] < x[tail] && b) {
			x[tail] -= x[head];
			head++;
			b = 0;
		}
	}


	f(head, tail);

}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &x[i], &c[i]);
	}
	f(1, n);
	printf("%lld", ans);
	return 0;
}
