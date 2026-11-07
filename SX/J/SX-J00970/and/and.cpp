#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int c[N], v1[N], v2[N], vi[N];
long long s = 0, n, m, ki;

void  dfs(int k) {
	if (k == m + 1) {
		long long s1 = v1[1];
		for (int i = 2; i <= k; i++) {
			s1 = (s1 &v1[i]);
		}
		s = max(s, s1);
	}
	for (int i = 1; i <= n; i++) {
		if (!v2[i]) {
			v1[k] = c[i];
			v2[i] = 1;
			dfs(k + 1);
			v2[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c[i]);
	}
	sort(c + 1, c + n + 1, greater<int>());
	if (m == 1) {
		cout << c[1];
		return 0;
	}
	if (m == n) {
		long long s2 = c[1];
		for (int i = 2; i <= n; i++) {
			s2 = (s2 &c[i]);
		}
		cout << s2;
		return 0;
	}
	dfs(1);
	cout << s;
	return 0;
}
