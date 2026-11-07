#include <bits/stdc++.h>

using namespace std;
int a[2000005], n, m, maxx = INT_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdin);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; i++) {
		string s;
		int lj = 0;
		while (a[i]) {
			s[lj] = char(a[i] % 2) + '0';
			lj++;
		}
		int h = s.size();
		for (int j = h - 1; j >= 0; j--)
			a[i] += 1 * (h - 1 - j) * 10 + int(s[j] - '0') + 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (maxx < (a[i] and a[j]))
				maxx = (a[i] and a[j]);
		}
	}
	printf("%d\n", maxx);
	return 0;
}
