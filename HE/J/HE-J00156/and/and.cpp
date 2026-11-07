#include <bits/stdc++.h>
using namespace std;

int n, m;
long long c[200010];
int a[200010];
bool b[200010];
long long ans = 0;

inline void solve(int i) {
	if (i == m + 1) {
		long long x = a[c[1]];
		for (int j = 2; j <= m; j++) {
			x &= a[c[j]];
		}
		ans = max(ans, x);
		return;
	}
	
	for (int j = 1; j <= n; j++) {
		if (!b[j]) {
			b[j] = true;
			c[i] = j;
			solve(i + 1);
			b[j] = false;
		}
	}
}

bool cmp(const int &a, const int &b) {
	return a > b;
}

bool my_yes(int x) {
	int y = 1;
	while (x >= y) {
		if (x == y) {
			return true;
		} 
		y *= 2;
	}
	return false;
}


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);	
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
		
		
	bool flag = true;
	for (int i = 1; i <= n; i++) {
		if (!(my_yes(a[i] + 1))) {
			flag = false;
		}
	}
	
	if (flag) {
		sort(a + 1, a + n + 1, cmp);
		for (int i = 2; i <= m; i++)
			a[1] &= a[i];
		printf("%d\n", a[1]);
	} else {
		solve(1);
		printf("%lld\n", ans);		
	}
	return 0;
}
