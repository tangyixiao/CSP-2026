#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010], s[1000000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d",&n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (int v = 1; v <= n; v++) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			int u;
			bool flag = true;
			for (int j = i; j <= n; i++) if (a[j] == i) u == j;
			for (int j = 1; j < u; j++) s[a[j]] = 1;
			for (int j = u + 1; j <= n; j++) if (s[a[j]] == 1) flag = false;
			if (flag) ++ans; 
		}
		printf("%d ", ans);
	}	
		
	return 0;
}
