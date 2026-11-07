#include <bits/stdc++.h>
using namespace std;
const int P = 5e5+5, K = 3e5+5;
int n, m, a[P], cnt[K], last[K];
queue<int>Q;

int Read() {
	int num = 0, sign = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-')
			sign = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
		num = (num << 1) + (num << 3) + (c ^ 48), c = getchar();
	return num * sign;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	n = Read(), m = Read();
	for (int i = 1; i <= n; i++)
		a[i] = Read(), last[a[i]] = i;
	for (int st = 1; st <= n; st++) {
		for (int k = st; k <= n;)
			Q.push(a[k]), k = last[a[k]] + 1;
		while (!Q.empty())
			cnt[Q.front()]++, Q.pop();
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", cnt[i]);
	return 0;
}