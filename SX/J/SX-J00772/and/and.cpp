#include <bits/stdc++.h>
using namespace std;
const int P = 2e5+5;
int n, m, a[P], ans;

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

void dfs(int k, int chosen, int now) {
	if (k > n) {
		if (chosen == m)
			ans = max(ans, now);
		return;
	}
	if (chosen + n - k + 1 < m || chosen > m)
		return;
	if (chosen > 0 && now < ans)
		return;
	dfs(k + 1, chosen + 1, !chosen ? a[k] : (now &a[k])), dfs(k + 1, chosen, now);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	n = Read(), m = Read();
	for (int i = 1; i <= n; i++)
		a[i] = Read();
	dfs(1, 0, 0), printf("%d", ans);
	return 0;
}
