#include <bits/stdc++.h>
using namespace std;

void input(int &a) {
	a = 0;
	char x = getchar();
	while (x != ' ' && x != '\n')
		a = a * 10 + (x - '0'), x = getchar();
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	input(n);
	input(m);
	int ans[m + 1] = {0}, a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	for (int i = 0; i < n; i++) {
		int c[n], res = 0;
		for (int j = i; j < n; j++) {
			bool f = 1;
			for (int k = 0; k < res; k++)
				if (c[k] == a[j]) {
					res = k + 1;
					f = 0;
					break;
				}
			if (f) {
				c[res++] = a[j];
			}
		}
		for (int j = 0; j < res; j++)
			ans[c[j]]++;
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}
