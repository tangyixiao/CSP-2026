#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int n, m;
bool b[200005];
long long mx = -1;

void dfs(int flor, long long num) {
	if (flor == m + 1) {
		if (num > mx) {
			mx = num;
		}
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 1)
			continue;
		b[i] = 1;
		dfs(flor + 1, num &a[i]);
		b[i] = 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	if (n == m) {
		long long o = a[1];
		for (int i = 2; i <= n; i++) {
			o &= a[i];
		}
		cout << o;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (b[i] == 1)
			continue;
		b[i] = 1;
		dfs(2, a[i]);
		b[i] = 0;
	}
	cout << mx;
	return 0;
}
