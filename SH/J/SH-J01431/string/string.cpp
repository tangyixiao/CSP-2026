#include <bits/stdc++.h>
using namespace std;
int n, a[202020], c[202020], s[202020], p;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++)
		scanf("%d %c", &a[i], &c[i]);
	for (int i = 1; i <= n; i ++)
		for (int j = 1; j <= a[i]; j ++)
			s[++ p] = c[i];
	int ans = 0;
	for (int i = 1, j = p; i <= j; i ++, j --)
		if (s[i] != s[j])
			ans ++;
	printf("%d", ans);
	return 0;
}
